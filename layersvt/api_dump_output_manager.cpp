#include "api_dump_output_manager.h"

#include <iostream>

template <typename T>
void OutputStream<T>::indent() {
    output << std::string(static_cast<size_t>(indent_level), '\t');
}

template <typename T>
void OutputStream<T>::comma() {}
template <>
void OutputStream<Format::json>::comma() {
    if (needs_comma) {
        output << ",\n";
    } else {
        needs_comma = true;
    }
}

template <typename T>
void OutputStream<T>::comma_and_indent() {
    comma();
    indent();
}

template <typename T>
bool OutputStream<T>::common_start_array_object() {
    indent_level++;
    bool old_needs_comma = needs_comma;
    needs_comma = false;
    return old_needs_comma;
}

template <typename T>
void OutputStream<T>::common_end_array_object(bool in_needs_comma) {
    needs_comma = in_needs_comma;
    output << "\n";
    indent_level--;
    indent();
}

template <>
bool OutputStream<Format::text>::start_object() {
    comma_and_indent();
    return common_start_array_object();
}
template <>
bool OutputStream<Format::html>::start_object() {
    comma_and_indent();
    return common_start_array_object();
}
template <>
bool OutputStream<Format::json>::start_object() {
    comma_and_indent();
    output << " {" << "\n";
    return common_start_array_object();
}

template <>
bool OutputStream<Format::text>::start_key_object(std::string const& key) {
    comma_and_indent();
    output << key << " : ";
    return common_start_array_object();
}
template <>
bool OutputStream<Format::html>::start_key_object(std::string const& key) {
    comma_and_indent();
    output << key << " : ";
    return common_start_array_object();
}
template <>
bool OutputStream<Format::json>::start_key_object(std::string const& key) {
    comma_and_indent();
    output << "\"" << key << "\" :  {" << "\n";
    return common_start_array_object();
}

template <>
bool OutputStream<Format::text>::start_array() {
    comma_and_indent();
    return common_start_array_object();
}
template <>
bool OutputStream<Format::html>::start_array() {
    comma_and_indent();
    return common_start_array_object();
}
template <>
bool OutputStream<Format::json>::start_array() {
    comma_and_indent();
    output << " [" << "\n";
    return common_start_array_object();
}

template <>
bool OutputStream<Format::text>::start_key_array(std::string const& key) {
    comma_and_indent();
    output << key << " : ";
    return common_start_array_object();
}
template <>
bool OutputStream<Format::html>::start_key_array(std::string const& key) {
    comma_and_indent();
    output << key << " : ";
    return common_start_array_object();
}
template <>
bool OutputStream<Format::json>::start_key_array(std::string const& key) {
    comma_and_indent();
    output << "\"" << key << "\" : [" << "\n";
    return common_start_array_object();
}

template <>
void OutputStream<Format::text>::end_object(bool in_needs_comma) {
    common_end_array_object(in_needs_comma);
}
template <>
void OutputStream<Format::html>::end_object(bool in_needs_comma) {
    common_end_array_object(in_needs_comma);
}
template <>
void OutputStream<Format::json>::end_object(bool in_needs_comma) {
    common_end_array_object(in_needs_comma);
    output << "}";
}
template <>
void OutputStream<Format::text>::end_array(bool in_needs_comma) {
    common_end_array_object(in_needs_comma);
}
template <>
void OutputStream<Format::html>::end_array(bool in_needs_comma) {
    common_end_array_object(in_needs_comma);
}
template <>
void OutputStream<Format::json>::end_array(bool in_needs_comma) {
    common_end_array_object(in_needs_comma);
    output << "]";
}

template <>
void OutputStream<Format::text>::write_string(std::string const& value) {
    comma_and_indent();
    output << value;
}
template <>
void OutputStream<Format::html>::write_string(std::string const& value) {
    comma_and_indent();
    output << value;
}
template <>
void OutputStream<Format::json>::write_string(std::string const& value) {
    comma_and_indent();
    output << "\"" << value << "\"";
}

template <>
void OutputStream<Format::text>::write_key_string(std::string const& key, std::string const& value) {
    comma_and_indent();
    output << key << " : " << value;
}
template <>
void OutputStream<Format::html>::write_key_string(std::string const& key, std::string const& value) {
    comma_and_indent();
    output << key << " : " << value;
}
template <>
void OutputStream<Format::json>::write_key_string(std::string const& key, std::string const& value) {
    comma_and_indent();
    output << "\"" << key << "\"" << " : \"" << value << "\"";
}

template <typename T>
void OutputStream<T>::write_int(uint32_t value) {
    comma_and_indent();
    output << std::to_string(value);
}
template <>
void OutputStream<Format::json>::write_int(uint32_t value) {
    comma_and_indent();
    output << "\"" << std::to_string(value) << "\"";
}

template <typename T>
void OutputStream<T>::write_key_int(std::string const& key, uint32_t value) {
    comma_and_indent();
    output << key << " : " << std::to_string(value);
}
template <>
void OutputStream<Format::json>::write_key_int(std::string const& key, uint32_t value) {
    comma_and_indent();
    output << "\"" << key << "\"" << " : \"" << std::to_string(value) << "\"";
}

template <typename T>
void OutputStream<T>::write_bool(bool value) {
    comma_and_indent();
    output << (value ? "true" : "false");
}
template <>
void OutputStream<Format::json>::write_bool(bool value) {
    comma_and_indent();
    output << "\"" << (value ? "true" : "false") << "\"";
}
template <typename T>
void OutputStream<T>::write_key_bool(std::string const& key, bool value) {
    comma_and_indent();
    output << key << " : " << (value ? "true" : "false");
}
template <>
void OutputStream<Format::json>::write_key_bool(std::string const& key, bool value) {
    comma_and_indent();
    output << "\"" << key << "\"" << " : \"" << (value ? "true" : "false") << "\"";
}

template <typename T>
Array<T>::Array(OutputStream<T>& output) : output(output) {
    parent_needs_comma = output.start_array();
}
template <typename T>
Array<T>::Array(OutputStream<T>& output, std::string const& key) : output(output) {
    parent_needs_comma = output.start_key_array(key);
}
template <typename T>
Array<T>::~Array() {
    output.end_array(parent_needs_comma);
}
template <typename T>
Object<T> Array<T>::create_object() {
    return Object<T>(output);
}

template <typename T>
Array<T> Array<T>::create_array() {
    return Array(output);
}

template <typename T>
void Array<T>::add_string(std::string const& value) {
    output.write_string(value);
}
template <typename T>
void Array<T>::add_int(uint32_t value) {
    output.write_int(value);
}
template <typename T>
void Array<T>::add_bool(bool value) {
    output.write_bool(value);
}

template <typename T>
Object<T>::Object(OutputStream<T>& output) : output(output) {
    parent_needs_comma = output.start_object();
}
template <typename T>
Object<T>::Object(OutputStream<T>& output, std::string const& key) : output(output) {
    parent_needs_comma = output.start_key_object(key);
}
template <typename T>
Object<T>::~Object() {
    output.end_object(parent_needs_comma);
}

template <typename T>
Object<T> Object<T>::create_object(std::string const& key) {
    return Object<T>(output, key);
}

template <typename T>
Array<T> Object<T>::create_array(std::string const& key) {
    return Array(output, key);
}

template <typename T>
void Object<T>::add_string(std::string const& key, std::string const& value) {
    output.write_key_string(key, value);
}
template <typename T>
void Object<T>::add_int(std::string const& key, uint32_t value) {
    output.write_key_int(key, value);
}
template <typename T>
void Object<T>::add_bool(std::string const& key, bool value) {
    output.write_key_bool(key, value);
}

int main(int argc, char** argv) {
    {
        auto manager = OutputStream<Format::json>(std::cout);

        auto top = Object<Format::json>(manager);
        {
            auto a = top.create_array("test");
            a.add_int(10);
            a.add_string("foobar");
            a.add_bool(true);
            {
                auto o = a.create_object();
                o.add_bool("wow", false);
            }
            {
                auto a1 = a.create_array();
                a1.add_string("okay");
                a1.add_string("uh-huh");
            }
        }
        {
            auto p = top.create_object("tee hee");
            p.add_int("oopsie", 29);
        }
    }
    std::cout << "\n";
}
