#pragma once

#include <stdint.h>

#include <string>
#include <vector>
#include <ostream>
#include <optional>
#include <variant>

// types so that we can use specialization to drive the outputter
namespace Format {
struct text {};
struct html {};
struct json {};
}  // namespace Format

template <typename T>
struct OutputStream {
    OutputStream(std::ostream& output) : output(output) {}

    bool start_object();
    bool start_key_object(std::string const& key);
    bool start_array();
    bool start_key_array(std::string const& key);

    void end_object(bool in_needs_comma);
    void end_array(bool in_needs_comma);

    void write_string(std::string const& value);
    void write_key_string(std::string const& key, std::string const& value);

    void write_int(uint32_t value);
    void write_key_int(std::string const& key, uint32_t value);

    void write_bool(bool value);
    void write_key_bool(std::string const& key, bool value);

   private:
    void comma();
    void indent();
    void comma_and_indent();
    bool common_start_array_object();
    void common_end_array_object(bool in_needs_comma);

    std::ostream& output;
    size_t indent_level = 0;
    bool needs_comma = false;
};

template <typename T>
class Object;

template <typename T>
class Array {
   public:
    Array(OutputStream<T>& output);
    Array(OutputStream<T>& output, const std::string& key);
    ~Array();

    [[nodiscard]] Object<T> create_object();
    [[nodiscard]] Array create_array();

    void add_string(std::string const& value);
    void add_int(uint32_t value);
    void add_bool(bool value);

   private:
    OutputStream<T>& output;
    bool parent_needs_comma = false;
};
template <typename T>
class Object {
   public:
    Object(OutputStream<T>& output);
    Object(OutputStream<T>& output, std::string const& key);
    ~Object();

    [[nodiscard]] Object create_object(std::string const& key);
    [[nodiscard]] Array<T> create_array(std::string const& key);

    void add_string(std::string const& key, std::string const& value);
    void add_int(std::string const& key, uint32_t value);
    void add_bool(std::string const& key, bool value);

   private:
    OutputStream<T>& output;
    bool parent_needs_comma = false;
};
