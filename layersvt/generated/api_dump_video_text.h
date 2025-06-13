
/* Copyright (c) 2015-2025 Valve Corporation
 * Copyright (c) 2015-2025 LunarG, Inc.
 * Copyright (c) 2015-2017, 2019, 2021 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * This file is generated from the Khronos Vulkan XML API Registry.
 */

#pragma once

#include "api_dump_text.h"

//=========================== Type Implementations ==========================//

void dump_text_uint32_t(const uint32_t &object, const ApiDumpSettings& settings, int indents)
{
    settings.stream() << object;
}
void dump_text_uint8_t(const uint8_t &object, const ApiDumpSettings& settings, int indents)
{
    settings.stream() << (uint32_t) object;
}
void dump_text_uint16_t(const uint16_t &object, const ApiDumpSettings& settings, int indents)
{
    settings.stream() << object;
}
void dump_text_int32_t(const int32_t &object, const ApiDumpSettings& settings, int indents)
{
    settings.stream() << object;
}
void dump_text_int8_t(const int8_t &object, const ApiDumpSettings& settings, int indents)
{
    settings.stream() << (int32_t) object;
}
void dump_text_int16_t(const int16_t &object, const ApiDumpSettings& settings, int indents)
{
    settings.stream() << object;
}

//========================= Basetype Implementations ========================//


//======================= System Type Implementations =======================//


//=========================== Enum Implementations ==========================//

void dump_text_StdVideoH264ChromaFormatIdc(const StdVideoH264ChromaFormatIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_CHROMA_FORMAT_IDC_MONOCHROME (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_CHROMA_FORMAT_IDC_420 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_CHROMA_FORMAT_IDC_422 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H264_CHROMA_FORMAT_IDC_444 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_CHROMA_FORMAT_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264ProfileIdc(const StdVideoH264ProfileIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 66:
        settings.stream() << "STD_VIDEO_H264_PROFILE_IDC_BASELINE (";
        break;
    case 77:
        settings.stream() << "STD_VIDEO_H264_PROFILE_IDC_MAIN (";
        break;
    case 100:
        settings.stream() << "STD_VIDEO_H264_PROFILE_IDC_HIGH (";
        break;
    case 244:
        settings.stream() << "STD_VIDEO_H264_PROFILE_IDC_HIGH_444_PREDICTIVE (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_PROFILE_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264LevelIdc(const StdVideoH264LevelIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_1_0 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_1_1 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_1_2 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_1_3 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_2_0 (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_2_1 (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_2_2 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_3_0 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_3_1 (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_3_2 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_4_0 (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_4_1 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_4_2 (";
        break;
    case 13:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_5_0 (";
        break;
    case 14:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_5_1 (";
        break;
    case 15:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_5_2 (";
        break;
    case 16:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_6_0 (";
        break;
    case 17:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_6_1 (";
        break;
    case 18:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_6_2 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_LEVEL_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264PocType(const StdVideoH264PocType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_POC_TYPE_0 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_POC_TYPE_1 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_POC_TYPE_2 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_POC_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264AspectRatioIdc(const StdVideoH264AspectRatioIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_UNSPECIFIED (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_SQUARE (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_12_11 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_10_11 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_16_11 (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_40_33 (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_24_11 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_20_11 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_32_11 (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_80_33 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_18_11 (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_15_11 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_64_33 (";
        break;
    case 13:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_160_99 (";
        break;
    case 14:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_4_3 (";
        break;
    case 15:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_3_2 (";
        break;
    case 16:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_2_1 (";
        break;
    case 255:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_EXTENDED_SAR (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_ASPECT_RATIO_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264WeightedBipredIdc(const StdVideoH264WeightedBipredIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_DEFAULT (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_EXPLICIT (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_IMPLICIT (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_WEIGHTED_BIPRED_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264ModificationOfPicNumsIdc(const StdVideoH264ModificationOfPicNumsIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_SHORT_TERM_SUBTRACT (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_SHORT_TERM_ADD (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_LONG_TERM (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_END (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_MODIFICATION_OF_PIC_NUMS_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264MemMgmtControlOp(const StdVideoH264MemMgmtControlOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_END (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_SHORT_TERM (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_LONG_TERM (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_MARK_LONG_TERM (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_SET_MAX_LONG_TERM_INDEX (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_UNMARK_ALL (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_MARK_CURRENT_AS_LONG_TERM (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_MEM_MGMT_CONTROL_OP_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264CabacInitIdc(const StdVideoH264CabacInitIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_CABAC_INIT_IDC_0 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_CABAC_INIT_IDC_1 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_CABAC_INIT_IDC_2 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_CABAC_INIT_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264DisableDeblockingFilterIdc(const StdVideoH264DisableDeblockingFilterIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_DISABLED (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_ENABLED (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_PARTIAL (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_DISABLE_DEBLOCKING_FILTER_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264SliceType(const StdVideoH264SliceType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_SLICE_TYPE_P (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_SLICE_TYPE_B (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_SLICE_TYPE_I (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_SLICE_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264PictureType(const StdVideoH264PictureType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_PICTURE_TYPE_P (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_PICTURE_TYPE_B (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_PICTURE_TYPE_I (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H264_PICTURE_TYPE_IDR (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_PICTURE_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH264NonVclNaluType(const StdVideoH264NonVclNaluType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_SPS (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_PPS (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_AUD (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_PREFIX (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_END_OF_SEQUENCE (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_END_OF_STREAM (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_PRECODED (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H264_NON_VCL_NALU_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoDecodeH264FieldOrderCount(const StdVideoDecodeH264FieldOrderCount object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_TOP (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_BOTTOM (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH265ChromaFormatIdc(const StdVideoH265ChromaFormatIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H265_CHROMA_FORMAT_IDC_MONOCHROME (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H265_CHROMA_FORMAT_IDC_420 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H265_CHROMA_FORMAT_IDC_422 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H265_CHROMA_FORMAT_IDC_444 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H265_CHROMA_FORMAT_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH265ProfileIdc(const StdVideoH265ProfileIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 1:
        settings.stream() << "STD_VIDEO_H265_PROFILE_IDC_MAIN (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H265_PROFILE_IDC_MAIN_10 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H265_PROFILE_IDC_MAIN_STILL_PICTURE (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H265_PROFILE_IDC_FORMAT_RANGE_EXTENSIONS (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_H265_PROFILE_IDC_SCC_EXTENSIONS (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H265_PROFILE_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH265LevelIdc(const StdVideoH265LevelIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_1_0 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_2_0 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_2_1 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_3_0 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_3_1 (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_4_0 (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_4_1 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_5_0 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_5_1 (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_5_2 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_6_0 (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_6_1 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_6_2 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H265_LEVEL_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH265SliceType(const StdVideoH265SliceType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H265_SLICE_TYPE_B (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H265_SLICE_TYPE_P (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H265_SLICE_TYPE_I (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H265_SLICE_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH265PictureType(const StdVideoH265PictureType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H265_PICTURE_TYPE_P (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H265_PICTURE_TYPE_B (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H265_PICTURE_TYPE_I (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H265_PICTURE_TYPE_IDR (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H265_PICTURE_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoH265AspectRatioIdc(const StdVideoH265AspectRatioIdc object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_UNSPECIFIED (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_SQUARE (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_12_11 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_10_11 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_16_11 (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_40_33 (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_24_11 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_20_11 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_32_11 (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_80_33 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_18_11 (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_15_11 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_64_33 (";
        break;
    case 13:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_160_99 (";
        break;
    case 14:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_4_3 (";
        break;
    case 15:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_3_2 (";
        break;
    case 16:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_2_1 (";
        break;
    case 255:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_EXTENDED_SAR (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_H265_ASPECT_RATIO_IDC_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1Profile(const StdVideoAV1Profile object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_PROFILE_MAIN (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_PROFILE_HIGH (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_PROFILE_PROFESSIONAL (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_PROFILE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1Level(const StdVideoAV1Level object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_2_0 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_2_1 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_2_2 (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_2_3 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_3_0 (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_3_1 (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_3_2 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_3_3 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_4_0 (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_4_1 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_4_2 (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_4_3 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_5_0 (";
        break;
    case 13:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_5_1 (";
        break;
    case 14:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_5_2 (";
        break;
    case 15:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_5_3 (";
        break;
    case 16:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_6_0 (";
        break;
    case 17:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_6_1 (";
        break;
    case 18:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_6_2 (";
        break;
    case 19:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_6_3 (";
        break;
    case 20:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_7_0 (";
        break;
    case 21:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_7_1 (";
        break;
    case 22:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_7_2 (";
        break;
    case 23:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_7_3 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_LEVEL_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1FrameType(const StdVideoAV1FrameType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_FRAME_TYPE_KEY (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_FRAME_TYPE_INTER (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_FRAME_TYPE_INTRA_ONLY (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_FRAME_TYPE_SWITCH (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_FRAME_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1ReferenceName(const StdVideoAV1ReferenceName object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_INTRA_FRAME (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_LAST_FRAME (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_LAST2_FRAME (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_LAST3_FRAME (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_GOLDEN_FRAME (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_BWDREF_FRAME (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_ALTREF2_FRAME (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_ALTREF_FRAME (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_REFERENCE_NAME_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1InterpolationFilter(const StdVideoAV1InterpolationFilter object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_INTERPOLATION_FILTER_EIGHTTAP (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_INTERPOLATION_FILTER_EIGHTTAP_SMOOTH (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_INTERPOLATION_FILTER_EIGHTTAP_SHARP (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_INTERPOLATION_FILTER_BILINEAR (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_AV1_INTERPOLATION_FILTER_SWITCHABLE (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_INTERPOLATION_FILTER_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1TxMode(const StdVideoAV1TxMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_TX_MODE_ONLY_4X4 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_TX_MODE_LARGEST (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_TX_MODE_SELECT (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_TX_MODE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1FrameRestorationType(const StdVideoAV1FrameRestorationType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_FRAME_RESTORATION_TYPE_NONE (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_FRAME_RESTORATION_TYPE_WIENER (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_FRAME_RESTORATION_TYPE_SGRPROJ (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_FRAME_RESTORATION_TYPE_SWITCHABLE (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_FRAME_RESTORATION_TYPE_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1ColorPrimaries(const StdVideoAV1ColorPrimaries object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 1:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_BT_709 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_UNSPECIFIED (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_BT_470_M (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_BT_470_B_G (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_BT_601 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_SMPTE_240 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_GENERIC_FILM (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_BT_2020 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_XYZ (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_SMPTE_431 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_SMPTE_432 (";
        break;
    case 22:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_EBU_3213 (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_COLOR_PRIMARIES_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1TransferCharacteristics(const StdVideoAV1TransferCharacteristics object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_RESERVED_0 (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_709 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_UNSPECIFIED (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_RESERVED_3 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_470_M (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_470_B_G (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_601 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_SMPTE_240 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_LINEAR (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_LOG_100 (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_LOG_100_SQRT10 (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_IEC_61966 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_1361 (";
        break;
    case 13:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_SRGB (";
        break;
    case 14:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_2020_10_BIT (";
        break;
    case 15:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_BT_2020_12_BIT (";
        break;
    case 16:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_SMPTE_2084 (";
        break;
    case 17:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_SMPTE_428 (";
        break;
    case 18:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_HLG (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_TRANSFER_CHARACTERISTICS_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1MatrixCoefficients(const StdVideoAV1MatrixCoefficients object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_IDENTITY (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_709 (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_UNSPECIFIED (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_RESERVED_3 (";
        break;
    case 4:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_FCC (";
        break;
    case 5:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_470_B_G (";
        break;
    case 6:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_601 (";
        break;
    case 7:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_240 (";
        break;
    case 8:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_YCGCO (";
        break;
    case 9:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_2020_NCL (";
        break;
    case 10:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_BT_2020_CL (";
        break;
    case 11:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_SMPTE_2085 (";
        break;
    case 12:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_CHROMAT_NCL (";
        break;
    case 13:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_CHROMAT_CL (";
        break;
    case 14:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_ICTCP (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_MATRIX_COEFFICIENTS_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}
void dump_text_StdVideoAV1ChromaSamplePosition(const StdVideoAV1ChromaSamplePosition object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "STD_VIDEO_AV1_CHROMA_SAMPLE_POSITION_UNKNOWN (";
        break;
    case 1:
        settings.stream() << "STD_VIDEO_AV1_CHROMA_SAMPLE_POSITION_VERTICAL (";
        break;
    case 2:
        settings.stream() << "STD_VIDEO_AV1_CHROMA_SAMPLE_POSITION_COLOCATED (";
        break;
    case 3:
        settings.stream() << "STD_VIDEO_AV1_CHROMA_SAMPLE_POSITION_RESERVED (";
        break;
    case 0x7FFFFFFF:
        settings.stream() << "STD_VIDEO_AV1_CHROMA_SAMPLE_POSITION_INVALID (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    settings.stream() << object << ")";
}

//========================= Bitmask Implementations =========================//


//=========================== Flag Implementations ==========================//


//======================= Func Pointer Implementations ======================//


//========================== Struct Implementations =========================//

void dump_text_StdVideoH264SpsVuiFlags(const StdVideoH264SpsVuiFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "aspect_ratio_info_present_flag", indents + 1);
    dump_text_uint32_t(object.aspect_ratio_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "overscan_info_present_flag", indents + 1);
    dump_text_uint32_t(object.overscan_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "overscan_appropriate_flag", indents + 1);
    dump_text_uint32_t(object.overscan_appropriate_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "video_signal_type_present_flag", indents + 1);
    dump_text_uint32_t(object.video_signal_type_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "video_full_range_flag", indents + 1);
    dump_text_uint32_t(object.video_full_range_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "color_description_present_flag", indents + 1);
    dump_text_uint32_t(object.color_description_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "chroma_loc_info_present_flag", indents + 1);
    dump_text_uint32_t(object.chroma_loc_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "timing_info_present_flag", indents + 1);
    dump_text_uint32_t(object.timing_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "fixed_frame_rate_flag", indents + 1);
    dump_text_uint32_t(object.fixed_frame_rate_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "bitstream_restriction_flag", indents + 1);
    dump_text_uint32_t(object.bitstream_restriction_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "nal_hrd_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.nal_hrd_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vcl_hrd_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.vcl_hrd_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH264HrdParameters(const StdVideoH264HrdParameters& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint8_t", "cpb_cnt_minus1", indents + 1);
    dump_text_uint8_t(object.cpb_cnt_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "bit_rate_scale", indents + 1);
    dump_text_uint8_t(object.bit_rate_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cpb_size_scale", indents + 1);
    dump_text_uint8_t(object.cpb_size_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.bit_rate_value_minus1, STD_VIDEO_H264_CPB_CNT_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H264_CPB_CNT_LIST_SIZE]", "uint32_t", "bit_rate_value_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "bit_rate_value_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.bit_rate_value_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.bit_rate_value_minus1, STD_VIDEO_H264_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.cpb_size_value_minus1, STD_VIDEO_H264_CPB_CNT_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H264_CPB_CNT_LIST_SIZE]", "uint32_t", "cpb_size_value_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cpb_size_value_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.cpb_size_value_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cpb_size_value_minus1, STD_VIDEO_H264_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.cbr_flag, STD_VIDEO_H264_CPB_CNT_LIST_SIZE, settings, "uint8_t[STD_VIDEO_H264_CPB_CNT_LIST_SIZE]", "uint8_t", "cbr_flag", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cbr_flag" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.cbr_flag[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cbr_flag, STD_VIDEO_H264_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "initial_cpb_removal_delay_length_minus1", indents + 1);
    dump_text_uint32_t(object.initial_cpb_removal_delay_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "cpb_removal_delay_length_minus1", indents + 1);
    dump_text_uint32_t(object.cpb_removal_delay_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "dpb_output_delay_length_minus1", indents + 1);
    dump_text_uint32_t(object.dpb_output_delay_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "time_offset_length", indents + 1);
    dump_text_uint32_t(object.time_offset_length, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH264SequenceParameterSetVui(const StdVideoH264SequenceParameterSetVui& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH264SpsVuiFlags", "flags", indents + 1);
    dump_text_StdVideoH264SpsVuiFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264AspectRatioIdc", "aspect_ratio_idc", indents + 1);
    dump_text_StdVideoH264AspectRatioIdc(object.aspect_ratio_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "sar_width", indents + 1);
    dump_text_uint16_t(object.sar_width, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "sar_height", indents + 1);
    dump_text_uint16_t(object.sar_height, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "video_format", indents + 1);
    dump_text_uint8_t(object.video_format, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "colour_primaries", indents + 1);
    dump_text_uint8_t(object.colour_primaries, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "transfer_characteristics", indents + 1);
    dump_text_uint8_t(object.transfer_characteristics, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "matrix_coefficients", indents + 1);
    dump_text_uint8_t(object.matrix_coefficients, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "num_units_in_tick", indents + 1);
    dump_text_uint32_t(object.num_units_in_tick, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "time_scale", indents + 1);
    dump_text_uint32_t(object.time_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_num_reorder_frames", indents + 1);
    dump_text_uint8_t(object.max_num_reorder_frames, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_dec_frame_buffering", indents + 1);
    dump_text_uint8_t(object.max_dec_frame_buffering, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_sample_loc_type_top_field", indents + 1);
    dump_text_uint8_t(object.chroma_sample_loc_type_top_field, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_sample_loc_type_bottom_field", indents + 1);
    dump_text_uint8_t(object.chroma_sample_loc_type_bottom_field, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "reserved1", indents + 1);
    dump_text_uint32_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pHrdParameters == NULL) {
        dump_text_nullptr(settings, "const StdVideoH264HrdParameters*", "pHrdParameters", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH264HrdParameters*", "pHrdParameters", indents + 1);
        dump_text_StdVideoH264HrdParameters(*object.pHrdParameters, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH264SpsFlags(const StdVideoH264SpsFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "constraint_set0_flag", indents + 1);
    dump_text_uint32_t(object.constraint_set0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constraint_set1_flag", indents + 1);
    dump_text_uint32_t(object.constraint_set1_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constraint_set2_flag", indents + 1);
    dump_text_uint32_t(object.constraint_set2_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constraint_set3_flag", indents + 1);
    dump_text_uint32_t(object.constraint_set3_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constraint_set4_flag", indents + 1);
    dump_text_uint32_t(object.constraint_set4_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constraint_set5_flag", indents + 1);
    dump_text_uint32_t(object.constraint_set5_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "direct_8x8_inference_flag", indents + 1);
    dump_text_uint32_t(object.direct_8x8_inference_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "mb_adaptive_frame_field_flag", indents + 1);
    dump_text_uint32_t(object.mb_adaptive_frame_field_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_mbs_only_flag", indents + 1);
    dump_text_uint32_t(object.frame_mbs_only_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_pic_order_always_zero_flag", indents + 1);
    dump_text_uint32_t(object.delta_pic_order_always_zero_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "separate_colour_plane_flag", indents + 1);
    dump_text_uint32_t(object.separate_colour_plane_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "gaps_in_frame_num_value_allowed_flag", indents + 1);
    dump_text_uint32_t(object.gaps_in_frame_num_value_allowed_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "qpprime_y_zero_transform_bypass_flag", indents + 1);
    dump_text_uint32_t(object.qpprime_y_zero_transform_bypass_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_cropping_flag", indents + 1);
    dump_text_uint32_t(object.frame_cropping_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "seq_scaling_matrix_present_flag", indents + 1);
    dump_text_uint32_t(object.seq_scaling_matrix_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vui_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.vui_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH264ScalingLists(const StdVideoH264ScalingLists& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint16_t", "scaling_list_present_mask", indents + 1);
    dump_text_uint16_t(object.scaling_list_present_mask, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "use_default_scaling_matrix_mask", indents + 1);
    dump_text_uint16_t(object.use_default_scaling_matrix_mask, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.ScalingList4x4, STD_VIDEO_H264_SCALING_LIST_4X4_NUM_LISTS*STD_VIDEO_H264_SCALING_LIST_4X4_NUM_ELEMENTS, settings, "uint8_t[STD_VIDEO_H264_SCALING_LIST_4X4_NUM_LISTS][STD_VIDEO_H264_SCALING_LIST_4X4_NUM_ELEMENTS]", "uint8_t", "ScalingList4x4", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_SCALING_LIST_4X4_NUM_LISTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H264_SCALING_LIST_4X4_NUM_ELEMENTS; ++j) {
        std::stringstream stream;
       stream << "ScalingList4x4" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1);
        dump_text_uint8_t(object.ScalingList4x4[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.ScalingList4x4, STD_VIDEO_H264_SCALING_LIST_4X4_NUM_LISTS*STD_VIDEO_H264_SCALING_LIST_4X4_NUM_ELEMENTS, settings, indents + 1);
    dump_text_array_start(object.ScalingList8x8, STD_VIDEO_H264_SCALING_LIST_8X8_NUM_LISTS*STD_VIDEO_H264_SCALING_LIST_8X8_NUM_ELEMENTS, settings, "uint8_t[STD_VIDEO_H264_SCALING_LIST_8X8_NUM_LISTS][STD_VIDEO_H264_SCALING_LIST_8X8_NUM_ELEMENTS]", "uint8_t", "ScalingList8x8", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_SCALING_LIST_8X8_NUM_LISTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H264_SCALING_LIST_8X8_NUM_ELEMENTS; ++j) {
        std::stringstream stream;
       stream << "ScalingList8x8" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1);
        dump_text_uint8_t(object.ScalingList8x8[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.ScalingList8x8, STD_VIDEO_H264_SCALING_LIST_8X8_NUM_LISTS*STD_VIDEO_H264_SCALING_LIST_8X8_NUM_ELEMENTS, settings, indents + 1);
}
void dump_text_StdVideoH264SequenceParameterSet(const StdVideoH264SequenceParameterSet& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH264SpsFlags", "flags", indents + 1);
    dump_text_StdVideoH264SpsFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264ProfileIdc", "profile_idc", indents + 1);
    dump_text_StdVideoH264ProfileIdc(object.profile_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264LevelIdc", "level_idc", indents + 1);
    dump_text_StdVideoH264LevelIdc(object.level_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264ChromaFormatIdc", "chroma_format_idc", indents + 1);
    dump_text_StdVideoH264ChromaFormatIdc(object.chroma_format_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "bit_depth_luma_minus8", indents + 1);
    dump_text_uint8_t(object.bit_depth_luma_minus8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "bit_depth_chroma_minus8", indents + 1);
    dump_text_uint8_t(object.bit_depth_chroma_minus8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_max_frame_num_minus4", indents + 1);
    dump_text_uint8_t(object.log2_max_frame_num_minus4, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264PocType", "pic_order_cnt_type", indents + 1);
    dump_text_StdVideoH264PocType(object.pic_order_cnt_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "offset_for_non_ref_pic", indents + 1);
    dump_text_int32_t(object.offset_for_non_ref_pic, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "offset_for_top_to_bottom_field", indents + 1);
    dump_text_int32_t(object.offset_for_top_to_bottom_field, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_max_pic_order_cnt_lsb_minus4", indents + 1);
    dump_text_uint8_t(object.log2_max_pic_order_cnt_lsb_minus4, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_frames_in_pic_order_cnt_cycle", indents + 1);
    dump_text_uint8_t(object.num_ref_frames_in_pic_order_cnt_cycle, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_num_ref_frames", indents + 1);
    dump_text_uint8_t(object.max_num_ref_frames, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "pic_width_in_mbs_minus1", indents + 1);
    dump_text_uint32_t(object.pic_width_in_mbs_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "pic_height_in_map_units_minus1", indents + 1);
    dump_text_uint32_t(object.pic_height_in_map_units_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "frame_crop_left_offset", indents + 1);
    dump_text_uint32_t(object.frame_crop_left_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "frame_crop_right_offset", indents + 1);
    dump_text_uint32_t(object.frame_crop_right_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "frame_crop_top_offset", indents + 1);
    dump_text_uint32_t(object.frame_crop_top_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "frame_crop_bottom_offset", indents + 1);
    dump_text_uint32_t(object.frame_crop_bottom_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "reserved2", indents + 1);
    dump_text_uint32_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pOffsetForRefFrame == NULL) {
        dump_text_nullptr(settings, "const int32_t*", "pOffsetForRefFrame", indents + 1);
    } else {
        dump_text_value_start(settings, "const int32_t*", "pOffsetForRefFrame", indents + 1);
        dump_text_int32_t(*object.pOffsetForRefFrame, settings, indents + 1);
        dump_text_value_end(settings, indents + 1);
    }
    if (object.pScalingLists == NULL) {
        dump_text_nullptr(settings, "const StdVideoH264ScalingLists*", "pScalingLists", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH264ScalingLists*", "pScalingLists", indents + 1);
        dump_text_StdVideoH264ScalingLists(*object.pScalingLists, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pSequenceParameterSetVui == NULL) {
        dump_text_nullptr(settings, "const StdVideoH264SequenceParameterSetVui*", "pSequenceParameterSetVui", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH264SequenceParameterSetVui*", "pSequenceParameterSetVui", indents + 1);
        dump_text_StdVideoH264SequenceParameterSetVui(*object.pSequenceParameterSetVui, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH264PpsFlags(const StdVideoH264PpsFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "transform_8x8_mode_flag", indents + 1);
    dump_text_uint32_t(object.transform_8x8_mode_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "redundant_pic_cnt_present_flag", indents + 1);
    dump_text_uint32_t(object.redundant_pic_cnt_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constrained_intra_pred_flag", indents + 1);
    dump_text_uint32_t(object.constrained_intra_pred_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "deblocking_filter_control_present_flag", indents + 1);
    dump_text_uint32_t(object.deblocking_filter_control_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "weighted_pred_flag", indents + 1);
    dump_text_uint32_t(object.weighted_pred_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "bottom_field_pic_order_in_frame_present_flag", indents + 1);
    dump_text_uint32_t(object.bottom_field_pic_order_in_frame_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "entropy_coding_mode_flag", indents + 1);
    dump_text_uint32_t(object.entropy_coding_mode_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pic_scaling_matrix_present_flag", indents + 1);
    dump_text_uint32_t(object.pic_scaling_matrix_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH264PictureParameterSet(const StdVideoH264PictureParameterSet& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH264PpsFlags", "flags", indents + 1);
    dump_text_StdVideoH264PpsFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pic_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pic_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l0_default_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l0_default_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l1_default_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l1_default_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264WeightedBipredIdc", "weighted_bipred_idc", indents + 1);
    dump_text_StdVideoH264WeightedBipredIdc(object.weighted_bipred_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pic_init_qp_minus26", indents + 1);
    dump_text_int8_t(object.pic_init_qp_minus26, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pic_init_qs_minus26", indents + 1);
    dump_text_int8_t(object.pic_init_qs_minus26, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "chroma_qp_index_offset", indents + 1);
    dump_text_int8_t(object.chroma_qp_index_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "second_chroma_qp_index_offset", indents + 1);
    dump_text_int8_t(object.second_chroma_qp_index_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pScalingLists == NULL) {
        dump_text_nullptr(settings, "const StdVideoH264ScalingLists*", "pScalingLists", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH264ScalingLists*", "pScalingLists", indents + 1);
        dump_text_StdVideoH264ScalingLists(*object.pScalingLists, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoDecodeH264PictureInfoFlags(const StdVideoDecodeH264PictureInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "field_pic_flag", indents + 1);
    dump_text_uint32_t(object.field_pic_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_intra", indents + 1);
    dump_text_uint32_t(object.is_intra, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "IdrPicFlag", indents + 1);
    dump_text_uint32_t(object.IdrPicFlag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "bottom_field_flag", indents + 1);
    dump_text_uint32_t(object.bottom_field_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_reference", indents + 1);
    dump_text_uint32_t(object.is_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "complementary_field_pair", indents + 1);
    dump_text_uint32_t(object.complementary_field_pair, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoDecodeH264PictureInfo(const StdVideoDecodeH264PictureInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoDecodeH264PictureInfoFlags", "flags", indents + 1);
    dump_text_StdVideoDecodeH264PictureInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pic_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pic_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved2", indents + 1);
    dump_text_uint8_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "frame_num", indents + 1);
    dump_text_uint16_t(object.frame_num, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "idr_pic_id", indents + 1);
    dump_text_uint16_t(object.idr_pic_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.PicOrderCnt, STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE, settings, "int32_t[STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE]", "int32_t", "PicOrderCnt", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "PicOrderCnt" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int32_t(object.PicOrderCnt[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.PicOrderCnt, STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE, settings, indents + 1);
}
void dump_text_StdVideoDecodeH264ReferenceInfoFlags(const StdVideoDecodeH264ReferenceInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "top_field_flag", indents + 1);
    dump_text_uint32_t(object.top_field_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "bottom_field_flag", indents + 1);
    dump_text_uint32_t(object.bottom_field_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "used_for_long_term_reference", indents + 1);
    dump_text_uint32_t(object.used_for_long_term_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_non_existing", indents + 1);
    dump_text_uint32_t(object.is_non_existing, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoDecodeH264ReferenceInfo(const StdVideoDecodeH264ReferenceInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoDecodeH264ReferenceInfoFlags", "flags", indents + 1);
    dump_text_StdVideoDecodeH264ReferenceInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "FrameNum", indents + 1);
    dump_text_uint16_t(object.FrameNum, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "reserved", indents + 1);
    dump_text_uint16_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.PicOrderCnt, STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE, settings, "int32_t[STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE]", "int32_t", "PicOrderCnt", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "PicOrderCnt" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int32_t(object.PicOrderCnt[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.PicOrderCnt, STD_VIDEO_DECODE_H264_FIELD_ORDER_COUNT_LIST_SIZE, settings, indents + 1);
}
void dump_text_StdVideoEncodeH264WeightTableFlags(const StdVideoEncodeH264WeightTableFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t", "luma_weight_l0_flag", indents + 1);
    dump_text_uint32_t(object.luma_weight_l0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "chroma_weight_l0_flag", indents + 1);
    dump_text_uint32_t(object.chroma_weight_l0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "luma_weight_l1_flag", indents + 1);
    dump_text_uint32_t(object.luma_weight_l1_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "chroma_weight_l1_flag", indents + 1);
    dump_text_uint32_t(object.chroma_weight_l1_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264WeightTable(const StdVideoEncodeH264WeightTable& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH264WeightTableFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH264WeightTableFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "luma_log2_weight_denom", indents + 1);
    dump_text_uint8_t(object.luma_log2_weight_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_log2_weight_denom", indents + 1);
    dump_text_uint8_t(object.chroma_log2_weight_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.luma_weight_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF]", "int8_t", "luma_weight_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "luma_weight_l0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.luma_weight_l0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.luma_weight_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.luma_offset_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF]", "int8_t", "luma_offset_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "luma_offset_l0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.luma_offset_l0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.luma_offset_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.chroma_weight_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF][STD_VIDEO_H264_MAX_CHROMA_PLANES]", "int8_t", "chroma_weight_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H264_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "chroma_weight_l0" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.chroma_weight_l0[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.chroma_weight_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, indents + 1);
    dump_text_array_start(object.chroma_offset_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF][STD_VIDEO_H264_MAX_CHROMA_PLANES]", "int8_t", "chroma_offset_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H264_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "chroma_offset_l0" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.chroma_offset_l0[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.chroma_offset_l0, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, indents + 1);
    dump_text_array_start(object.luma_weight_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF]", "int8_t", "luma_weight_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "luma_weight_l1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.luma_weight_l1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.luma_weight_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.luma_offset_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF]", "int8_t", "luma_offset_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "luma_offset_l1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.luma_offset_l1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.luma_offset_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.chroma_weight_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF][STD_VIDEO_H264_MAX_CHROMA_PLANES]", "int8_t", "chroma_weight_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H264_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "chroma_weight_l1" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.chroma_weight_l1[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.chroma_weight_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, indents + 1);
    dump_text_array_start(object.chroma_offset_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF][STD_VIDEO_H264_MAX_CHROMA_PLANES]", "int8_t", "chroma_offset_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H264_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "chroma_offset_l1" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.chroma_offset_l1[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.chroma_offset_l1, STD_VIDEO_H264_MAX_NUM_LIST_REF*STD_VIDEO_H264_MAX_CHROMA_PLANES, settings, indents + 1);
}
void dump_text_StdVideoEncodeH264SliceHeaderFlags(const StdVideoEncodeH264SliceHeaderFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "direct_spatial_mv_pred_flag", indents + 1);
    dump_text_uint32_t(object.direct_spatial_mv_pred_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "num_ref_idx_active_override_flag", indents + 1);
    dump_text_uint32_t(object.num_ref_idx_active_override_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264PictureInfoFlags(const StdVideoEncodeH264PictureInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "IdrPicFlag", indents + 1);
    dump_text_uint32_t(object.IdrPicFlag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_reference", indents + 1);
    dump_text_uint32_t(object.is_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "no_output_of_prior_pics_flag", indents + 1);
    dump_text_uint32_t(object.no_output_of_prior_pics_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "long_term_reference_flag", indents + 1);
    dump_text_uint32_t(object.long_term_reference_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "adaptive_ref_pic_marking_mode_flag", indents + 1);
    dump_text_uint32_t(object.adaptive_ref_pic_marking_mode_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 27", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264ReferenceInfoFlags(const StdVideoEncodeH264ReferenceInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "used_for_long_term_reference", indents + 1);
    dump_text_uint32_t(object.used_for_long_term_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 31", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264ReferenceListsInfoFlags(const StdVideoEncodeH264ReferenceListsInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "ref_pic_list_modification_flag_l0", indents + 1);
    dump_text_uint32_t(object.ref_pic_list_modification_flag_l0, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "ref_pic_list_modification_flag_l1", indents + 1);
    dump_text_uint32_t(object.ref_pic_list_modification_flag_l1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264RefListModEntry(const StdVideoEncodeH264RefListModEntry& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "StdVideoH264ModificationOfPicNumsIdc", "modification_of_pic_nums_idc", indents + 1);
    dump_text_StdVideoH264ModificationOfPicNumsIdc(object.modification_of_pic_nums_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "abs_diff_pic_num_minus1", indents + 1);
    dump_text_uint16_t(object.abs_diff_pic_num_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "long_term_pic_num", indents + 1);
    dump_text_uint16_t(object.long_term_pic_num, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264RefPicMarkingEntry(const StdVideoEncodeH264RefPicMarkingEntry& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "StdVideoH264MemMgmtControlOp", "memory_management_control_operation", indents + 1);
    dump_text_StdVideoH264MemMgmtControlOp(object.memory_management_control_operation, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "difference_of_pic_nums_minus1", indents + 1);
    dump_text_uint16_t(object.difference_of_pic_nums_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "long_term_pic_num", indents + 1);
    dump_text_uint16_t(object.long_term_pic_num, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "long_term_frame_idx", indents + 1);
    dump_text_uint16_t(object.long_term_frame_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "max_long_term_frame_idx_plus1", indents + 1);
    dump_text_uint16_t(object.max_long_term_frame_idx_plus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264ReferenceListsInfo(const StdVideoEncodeH264ReferenceListsInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH264ReferenceListsInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH264ReferenceListsInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l0_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l0_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l1_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l1_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.RefPicList0, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, "uint8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF]", "uint8_t", "RefPicList0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "RefPicList0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicList0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicList0, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.RefPicList1, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, "uint8_t[STD_VIDEO_H264_MAX_NUM_LIST_REF]", "uint8_t", "RefPicList1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H264_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "RefPicList1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicList1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicList1, STD_VIDEO_H264_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "refList0ModOpCount", indents + 1);
    dump_text_uint8_t(object.refList0ModOpCount, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "refList1ModOpCount", indents + 1);
    dump_text_uint8_t(object.refList1ModOpCount, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "refPicMarkingOpCount", indents + 1);
    dump_text_uint8_t(object.refPicMarkingOpCount, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved1, 7, settings, "uint8_t[7]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 7; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 7, settings, indents + 1);
    if (object.pRefList0ModOperations == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH264RefListModEntry*", "pRefList0ModOperations", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH264RefListModEntry*", "pRefList0ModOperations", indents + 1);
        dump_text_StdVideoEncodeH264RefListModEntry(*object.pRefList0ModOperations, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pRefList1ModOperations == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH264RefListModEntry*", "pRefList1ModOperations", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH264RefListModEntry*", "pRefList1ModOperations", indents + 1);
        dump_text_StdVideoEncodeH264RefListModEntry(*object.pRefList1ModOperations, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pRefPicMarkingOperations == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH264RefPicMarkingEntry*", "pRefPicMarkingOperations", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH264RefPicMarkingEntry*", "pRefPicMarkingOperations", indents + 1);
        dump_text_StdVideoEncodeH264RefPicMarkingEntry(*object.pRefPicMarkingOperations, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoEncodeH264PictureInfo(const StdVideoEncodeH264PictureInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH264PictureInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH264PictureInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pic_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pic_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "idr_pic_id", indents + 1);
    dump_text_uint16_t(object.idr_pic_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264PictureType", "primary_pic_type", indents + 1);
    dump_text_StdVideoH264PictureType(object.primary_pic_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "frame_num", indents + 1);
    dump_text_uint32_t(object.frame_num, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "PicOrderCnt", indents + 1);
    dump_text_int32_t(object.PicOrderCnt, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "temporal_id", indents + 1);
    dump_text_uint8_t(object.temporal_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved1, 3, settings, "uint8_t[3]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 3; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 3, settings, indents + 1);
    if (object.pRefLists == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH264ReferenceListsInfo*", "pRefLists", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH264ReferenceListsInfo*", "pRefLists", indents + 1);
        dump_text_StdVideoEncodeH264ReferenceListsInfo(*object.pRefLists, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoEncodeH264ReferenceInfo(const StdVideoEncodeH264ReferenceInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH264ReferenceInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH264ReferenceInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264PictureType", "primary_pic_type", indents + 1);
    dump_text_StdVideoH264PictureType(object.primary_pic_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "FrameNum", indents + 1);
    dump_text_uint32_t(object.FrameNum, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "PicOrderCnt", indents + 1);
    dump_text_int32_t(object.PicOrderCnt, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "long_term_pic_num", indents + 1);
    dump_text_uint16_t(object.long_term_pic_num, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "long_term_frame_idx", indents + 1);
    dump_text_uint16_t(object.long_term_frame_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "temporal_id", indents + 1);
    dump_text_uint8_t(object.temporal_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH264SliceHeader(const StdVideoEncodeH264SliceHeader& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH264SliceHeaderFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH264SliceHeaderFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "first_mb_in_slice", indents + 1);
    dump_text_uint32_t(object.first_mb_in_slice, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264SliceType", "slice_type", indents + 1);
    dump_text_StdVideoH264SliceType(object.slice_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_alpha_c0_offset_div2", indents + 1);
    dump_text_int8_t(object.slice_alpha_c0_offset_div2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_beta_offset_div2", indents + 1);
    dump_text_int8_t(object.slice_beta_offset_div2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_qp_delta", indents + 1);
    dump_text_int8_t(object.slice_qp_delta, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264CabacInitIdc", "cabac_init_idc", indents + 1);
    dump_text_StdVideoH264CabacInitIdc(object.cabac_init_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH264DisableDeblockingFilterIdc", "disable_deblocking_filter_idc", indents + 1);
    dump_text_StdVideoH264DisableDeblockingFilterIdc(object.disable_deblocking_filter_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pWeightTable == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH264WeightTable*", "pWeightTable", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH264WeightTable*", "pWeightTable", indents + 1);
        dump_text_StdVideoEncodeH264WeightTable(*object.pWeightTable, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH265DecPicBufMgr(const StdVideoH265DecPicBufMgr& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.max_latency_increase_plus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H265_SUBLAYERS_LIST_SIZE]", "uint32_t", "max_latency_increase_plus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SUBLAYERS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "max_latency_increase_plus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.max_latency_increase_plus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.max_latency_increase_plus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.max_dec_pic_buffering_minus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, "uint8_t[STD_VIDEO_H265_SUBLAYERS_LIST_SIZE]", "uint8_t", "max_dec_pic_buffering_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SUBLAYERS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "max_dec_pic_buffering_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.max_dec_pic_buffering_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.max_dec_pic_buffering_minus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.max_num_reorder_pics, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, "uint8_t[STD_VIDEO_H265_SUBLAYERS_LIST_SIZE]", "uint8_t", "max_num_reorder_pics", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SUBLAYERS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "max_num_reorder_pics" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.max_num_reorder_pics[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.max_num_reorder_pics, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, indents + 1);
}
void dump_text_StdVideoH265SubLayerHrdParameters(const StdVideoH265SubLayerHrdParameters& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.bit_rate_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H265_CPB_CNT_LIST_SIZE]", "uint32_t", "bit_rate_value_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "bit_rate_value_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.bit_rate_value_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.bit_rate_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.cpb_size_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H265_CPB_CNT_LIST_SIZE]", "uint32_t", "cpb_size_value_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cpb_size_value_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.cpb_size_value_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cpb_size_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.cpb_size_du_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H265_CPB_CNT_LIST_SIZE]", "uint32_t", "cpb_size_du_value_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cpb_size_du_value_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.cpb_size_du_value_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cpb_size_du_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.bit_rate_du_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, "uint32_t[STD_VIDEO_H265_CPB_CNT_LIST_SIZE]", "uint32_t", "bit_rate_du_value_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CPB_CNT_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "bit_rate_du_value_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.bit_rate_du_value_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.bit_rate_du_value_minus1, STD_VIDEO_H265_CPB_CNT_LIST_SIZE, settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "cbr_flag", indents + 1);
    dump_text_uint32_t(object.cbr_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265HrdFlags(const StdVideoH265HrdFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "nal_hrd_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.nal_hrd_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vcl_hrd_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.vcl_hrd_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sub_pic_hrd_params_present_flag", indents + 1);
    dump_text_uint32_t(object.sub_pic_hrd_params_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sub_pic_cpb_params_in_pic_timing_sei_flag", indents + 1);
    dump_text_uint32_t(object.sub_pic_cpb_params_in_pic_timing_sei_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 8", "fixed_pic_rate_general_flag", indents + 1);
    dump_text_uint32_t(object.fixed_pic_rate_general_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 8", "fixed_pic_rate_within_cvs_flag", indents + 1);
    dump_text_uint32_t(object.fixed_pic_rate_within_cvs_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 8", "low_delay_hrd_flag", indents + 1);
    dump_text_uint32_t(object.low_delay_hrd_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265HrdParameters(const StdVideoH265HrdParameters& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265HrdFlags", "flags", indents + 1);
    dump_text_StdVideoH265HrdFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "tick_divisor_minus2", indents + 1);
    dump_text_uint8_t(object.tick_divisor_minus2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "du_cpb_removal_delay_increment_length_minus1", indents + 1);
    dump_text_uint8_t(object.du_cpb_removal_delay_increment_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "dpb_output_delay_du_length_minus1", indents + 1);
    dump_text_uint8_t(object.dpb_output_delay_du_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "bit_rate_scale", indents + 1);
    dump_text_uint8_t(object.bit_rate_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cpb_size_scale", indents + 1);
    dump_text_uint8_t(object.cpb_size_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cpb_size_du_scale", indents + 1);
    dump_text_uint8_t(object.cpb_size_du_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "initial_cpb_removal_delay_length_minus1", indents + 1);
    dump_text_uint8_t(object.initial_cpb_removal_delay_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "au_cpb_removal_delay_length_minus1", indents + 1);
    dump_text_uint8_t(object.au_cpb_removal_delay_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "dpb_output_delay_length_minus1", indents + 1);
    dump_text_uint8_t(object.dpb_output_delay_length_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.cpb_cnt_minus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, "uint8_t[STD_VIDEO_H265_SUBLAYERS_LIST_SIZE]", "uint8_t", "cpb_cnt_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SUBLAYERS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cpb_cnt_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.cpb_cnt_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cpb_cnt_minus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.elemental_duration_in_tc_minus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, "uint16_t[STD_VIDEO_H265_SUBLAYERS_LIST_SIZE]", "uint16_t", "elemental_duration_in_tc_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SUBLAYERS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "elemental_duration_in_tc_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.elemental_duration_in_tc_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.elemental_duration_in_tc_minus1, STD_VIDEO_H265_SUBLAYERS_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.reserved, 3, settings, "uint16_t[3]", "uint16_t", "reserved", indents + 1);
    for (size_t i = 0; i < 3; ++i) {
        std::stringstream stream;
        stream << "reserved" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.reserved[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved, 3, settings, indents + 1);
    if (object.pSubLayerHrdParametersNal == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265SubLayerHrdParameters*", "pSubLayerHrdParametersNal", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265SubLayerHrdParameters*", "pSubLayerHrdParametersNal", indents + 1);
        dump_text_StdVideoH265SubLayerHrdParameters(*object.pSubLayerHrdParametersNal, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pSubLayerHrdParametersVcl == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265SubLayerHrdParameters*", "pSubLayerHrdParametersVcl", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265SubLayerHrdParameters*", "pSubLayerHrdParametersVcl", indents + 1);
        dump_text_StdVideoH265SubLayerHrdParameters(*object.pSubLayerHrdParametersVcl, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH265VpsFlags(const StdVideoH265VpsFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "vps_temporal_id_nesting_flag", indents + 1);
    dump_text_uint32_t(object.vps_temporal_id_nesting_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vps_sub_layer_ordering_info_present_flag", indents + 1);
    dump_text_uint32_t(object.vps_sub_layer_ordering_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vps_timing_info_present_flag", indents + 1);
    dump_text_uint32_t(object.vps_timing_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vps_poc_proportional_to_timing_flag", indents + 1);
    dump_text_uint32_t(object.vps_poc_proportional_to_timing_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265ProfileTierLevelFlags(const StdVideoH265ProfileTierLevelFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "general_tier_flag", indents + 1);
    dump_text_uint32_t(object.general_tier_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "general_progressive_source_flag", indents + 1);
    dump_text_uint32_t(object.general_progressive_source_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "general_interlaced_source_flag", indents + 1);
    dump_text_uint32_t(object.general_interlaced_source_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "general_non_packed_constraint_flag", indents + 1);
    dump_text_uint32_t(object.general_non_packed_constraint_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "general_frame_only_constraint_flag", indents + 1);
    dump_text_uint32_t(object.general_frame_only_constraint_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265ProfileTierLevel(const StdVideoH265ProfileTierLevel& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265ProfileTierLevelFlags", "flags", indents + 1);
    dump_text_StdVideoH265ProfileTierLevelFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265ProfileIdc", "general_profile_idc", indents + 1);
    dump_text_StdVideoH265ProfileIdc(object.general_profile_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265LevelIdc", "general_level_idc", indents + 1);
    dump_text_StdVideoH265LevelIdc(object.general_level_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265VideoParameterSet(const StdVideoH265VideoParameterSet& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265VpsFlags", "flags", indents + 1);
    dump_text_StdVideoH265VpsFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "vps_video_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.vps_video_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "vps_max_sub_layers_minus1", indents + 1);
    dump_text_uint8_t(object.vps_max_sub_layers_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved2", indents + 1);
    dump_text_uint8_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "vps_num_units_in_tick", indents + 1);
    dump_text_uint32_t(object.vps_num_units_in_tick, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "vps_time_scale", indents + 1);
    dump_text_uint32_t(object.vps_time_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "vps_num_ticks_poc_diff_one_minus1", indents + 1);
    dump_text_uint32_t(object.vps_num_ticks_poc_diff_one_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "reserved3", indents + 1);
    dump_text_uint32_t(object.reserved3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pDecPicBufMgr == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265DecPicBufMgr*", "pDecPicBufMgr", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265DecPicBufMgr*", "pDecPicBufMgr", indents + 1);
        dump_text_StdVideoH265DecPicBufMgr(*object.pDecPicBufMgr, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pHrdParameters == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265HrdParameters*", "pHrdParameters", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265HrdParameters*", "pHrdParameters", indents + 1);
        dump_text_StdVideoH265HrdParameters(*object.pHrdParameters, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pProfileTierLevel == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265ProfileTierLevel*", "pProfileTierLevel", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265ProfileTierLevel*", "pProfileTierLevel", indents + 1);
        dump_text_StdVideoH265ProfileTierLevel(*object.pProfileTierLevel, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH265ScalingLists(const StdVideoH265ScalingLists& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.ScalingList4x4, STD_VIDEO_H265_SCALING_LIST_4X4_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_4X4_NUM_ELEMENTS, settings, "uint8_t[STD_VIDEO_H265_SCALING_LIST_4X4_NUM_LISTS][STD_VIDEO_H265_SCALING_LIST_4X4_NUM_ELEMENTS]", "uint8_t", "ScalingList4x4", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SCALING_LIST_4X4_NUM_LISTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_SCALING_LIST_4X4_NUM_ELEMENTS; ++j) {
        std::stringstream stream;
       stream << "ScalingList4x4" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1);
        dump_text_uint8_t(object.ScalingList4x4[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.ScalingList4x4, STD_VIDEO_H265_SCALING_LIST_4X4_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_4X4_NUM_ELEMENTS, settings, indents + 1);
    dump_text_array_start(object.ScalingList8x8, STD_VIDEO_H265_SCALING_LIST_8X8_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_8X8_NUM_ELEMENTS, settings, "uint8_t[STD_VIDEO_H265_SCALING_LIST_8X8_NUM_LISTS][STD_VIDEO_H265_SCALING_LIST_8X8_NUM_ELEMENTS]", "uint8_t", "ScalingList8x8", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SCALING_LIST_8X8_NUM_LISTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_SCALING_LIST_8X8_NUM_ELEMENTS; ++j) {
        std::stringstream stream;
       stream << "ScalingList8x8" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1);
        dump_text_uint8_t(object.ScalingList8x8[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.ScalingList8x8, STD_VIDEO_H265_SCALING_LIST_8X8_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_8X8_NUM_ELEMENTS, settings, indents + 1);
    dump_text_array_start(object.ScalingList16x16, STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_16X16_NUM_ELEMENTS, settings, "uint8_t[STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS][STD_VIDEO_H265_SCALING_LIST_16X16_NUM_ELEMENTS]", "uint8_t", "ScalingList16x16", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_SCALING_LIST_16X16_NUM_ELEMENTS; ++j) {
        std::stringstream stream;
       stream << "ScalingList16x16" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1);
        dump_text_uint8_t(object.ScalingList16x16[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.ScalingList16x16, STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_16X16_NUM_ELEMENTS, settings, indents + 1);
    dump_text_array_start(object.ScalingList32x32, STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_32X32_NUM_ELEMENTS, settings, "uint8_t[STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS][STD_VIDEO_H265_SCALING_LIST_32X32_NUM_ELEMENTS]", "uint8_t", "ScalingList32x32", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_SCALING_LIST_32X32_NUM_ELEMENTS; ++j) {
        std::stringstream stream;
       stream << "ScalingList32x32" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1);
        dump_text_uint8_t(object.ScalingList32x32[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.ScalingList32x32, STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS*STD_VIDEO_H265_SCALING_LIST_32X32_NUM_ELEMENTS, settings, indents + 1);
    dump_text_array_start(object.ScalingListDCCoef16x16, STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS, settings, "uint8_t[STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS]", "uint8_t", "ScalingListDCCoef16x16", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS; ++i) {
        std::stringstream stream;
        stream << "ScalingListDCCoef16x16" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.ScalingListDCCoef16x16[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ScalingListDCCoef16x16, STD_VIDEO_H265_SCALING_LIST_16X16_NUM_LISTS, settings, indents + 1);
    dump_text_array_start(object.ScalingListDCCoef32x32, STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS, settings, "uint8_t[STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS]", "uint8_t", "ScalingListDCCoef32x32", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS; ++i) {
        std::stringstream stream;
        stream << "ScalingListDCCoef32x32" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.ScalingListDCCoef32x32[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ScalingListDCCoef32x32, STD_VIDEO_H265_SCALING_LIST_32X32_NUM_LISTS, settings, indents + 1);
}
void dump_text_StdVideoH265SpsVuiFlags(const StdVideoH265SpsVuiFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "aspect_ratio_info_present_flag", indents + 1);
    dump_text_uint32_t(object.aspect_ratio_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "overscan_info_present_flag", indents + 1);
    dump_text_uint32_t(object.overscan_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "overscan_appropriate_flag", indents + 1);
    dump_text_uint32_t(object.overscan_appropriate_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "video_signal_type_present_flag", indents + 1);
    dump_text_uint32_t(object.video_signal_type_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "video_full_range_flag", indents + 1);
    dump_text_uint32_t(object.video_full_range_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "colour_description_present_flag", indents + 1);
    dump_text_uint32_t(object.colour_description_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "chroma_loc_info_present_flag", indents + 1);
    dump_text_uint32_t(object.chroma_loc_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "neutral_chroma_indication_flag", indents + 1);
    dump_text_uint32_t(object.neutral_chroma_indication_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "field_seq_flag", indents + 1);
    dump_text_uint32_t(object.field_seq_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_field_info_present_flag", indents + 1);
    dump_text_uint32_t(object.frame_field_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "default_display_window_flag", indents + 1);
    dump_text_uint32_t(object.default_display_window_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vui_timing_info_present_flag", indents + 1);
    dump_text_uint32_t(object.vui_timing_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vui_poc_proportional_to_timing_flag", indents + 1);
    dump_text_uint32_t(object.vui_poc_proportional_to_timing_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vui_hrd_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.vui_hrd_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "bitstream_restriction_flag", indents + 1);
    dump_text_uint32_t(object.bitstream_restriction_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "tiles_fixed_structure_flag", indents + 1);
    dump_text_uint32_t(object.tiles_fixed_structure_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "motion_vectors_over_pic_boundaries_flag", indents + 1);
    dump_text_uint32_t(object.motion_vectors_over_pic_boundaries_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "restricted_ref_pic_lists_flag", indents + 1);
    dump_text_uint32_t(object.restricted_ref_pic_lists_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265SequenceParameterSetVui(const StdVideoH265SequenceParameterSetVui& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265SpsVuiFlags", "flags", indents + 1);
    dump_text_StdVideoH265SpsVuiFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265AspectRatioIdc", "aspect_ratio_idc", indents + 1);
    dump_text_StdVideoH265AspectRatioIdc(object.aspect_ratio_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "sar_width", indents + 1);
    dump_text_uint16_t(object.sar_width, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "sar_height", indents + 1);
    dump_text_uint16_t(object.sar_height, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "video_format", indents + 1);
    dump_text_uint8_t(object.video_format, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "colour_primaries", indents + 1);
    dump_text_uint8_t(object.colour_primaries, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "transfer_characteristics", indents + 1);
    dump_text_uint8_t(object.transfer_characteristics, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "matrix_coeffs", indents + 1);
    dump_text_uint8_t(object.matrix_coeffs, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_sample_loc_type_top_field", indents + 1);
    dump_text_uint8_t(object.chroma_sample_loc_type_top_field, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_sample_loc_type_bottom_field", indents + 1);
    dump_text_uint8_t(object.chroma_sample_loc_type_bottom_field, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved2", indents + 1);
    dump_text_uint8_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "def_disp_win_left_offset", indents + 1);
    dump_text_uint16_t(object.def_disp_win_left_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "def_disp_win_right_offset", indents + 1);
    dump_text_uint16_t(object.def_disp_win_right_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "def_disp_win_top_offset", indents + 1);
    dump_text_uint16_t(object.def_disp_win_top_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "def_disp_win_bottom_offset", indents + 1);
    dump_text_uint16_t(object.def_disp_win_bottom_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "vui_num_units_in_tick", indents + 1);
    dump_text_uint32_t(object.vui_num_units_in_tick, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "vui_time_scale", indents + 1);
    dump_text_uint32_t(object.vui_time_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "vui_num_ticks_poc_diff_one_minus1", indents + 1);
    dump_text_uint32_t(object.vui_num_ticks_poc_diff_one_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "min_spatial_segmentation_idc", indents + 1);
    dump_text_uint16_t(object.min_spatial_segmentation_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "reserved3", indents + 1);
    dump_text_uint16_t(object.reserved3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_bytes_per_pic_denom", indents + 1);
    dump_text_uint8_t(object.max_bytes_per_pic_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_bits_per_min_cu_denom", indents + 1);
    dump_text_uint8_t(object.max_bits_per_min_cu_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_max_mv_length_horizontal", indents + 1);
    dump_text_uint8_t(object.log2_max_mv_length_horizontal, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_max_mv_length_vertical", indents + 1);
    dump_text_uint8_t(object.log2_max_mv_length_vertical, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pHrdParameters == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265HrdParameters*", "pHrdParameters", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265HrdParameters*", "pHrdParameters", indents + 1);
        dump_text_StdVideoH265HrdParameters(*object.pHrdParameters, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH265PredictorPaletteEntries(const StdVideoH265PredictorPaletteEntries& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.PredictorPaletteEntries, STD_VIDEO_H265_PREDICTOR_PALETTE_COMPONENTS_LIST_SIZE*STD_VIDEO_H265_PREDICTOR_PALETTE_COMP_ENTRIES_LIST_SIZE, settings, "uint16_t[STD_VIDEO_H265_PREDICTOR_PALETTE_COMPONENTS_LIST_SIZE][STD_VIDEO_H265_PREDICTOR_PALETTE_COMP_ENTRIES_LIST_SIZE]", "uint16_t", "PredictorPaletteEntries", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_PREDICTOR_PALETTE_COMPONENTS_LIST_SIZE; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_PREDICTOR_PALETTE_COMP_ENTRIES_LIST_SIZE; ++j) {
        std::stringstream stream;
       stream << "PredictorPaletteEntries" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1);
        dump_text_uint16_t(object.PredictorPaletteEntries[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.PredictorPaletteEntries, STD_VIDEO_H265_PREDICTOR_PALETTE_COMPONENTS_LIST_SIZE*STD_VIDEO_H265_PREDICTOR_PALETTE_COMP_ENTRIES_LIST_SIZE, settings, indents + 1);
}
void dump_text_StdVideoH265SpsFlags(const StdVideoH265SpsFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "sps_temporal_id_nesting_flag", indents + 1);
    dump_text_uint32_t(object.sps_temporal_id_nesting_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "separate_colour_plane_flag", indents + 1);
    dump_text_uint32_t(object.separate_colour_plane_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "conformance_window_flag", indents + 1);
    dump_text_uint32_t(object.conformance_window_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_sub_layer_ordering_info_present_flag", indents + 1);
    dump_text_uint32_t(object.sps_sub_layer_ordering_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "scaling_list_enabled_flag", indents + 1);
    dump_text_uint32_t(object.scaling_list_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_scaling_list_data_present_flag", indents + 1);
    dump_text_uint32_t(object.sps_scaling_list_data_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "amp_enabled_flag", indents + 1);
    dump_text_uint32_t(object.amp_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sample_adaptive_offset_enabled_flag", indents + 1);
    dump_text_uint32_t(object.sample_adaptive_offset_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pcm_enabled_flag", indents + 1);
    dump_text_uint32_t(object.pcm_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pcm_loop_filter_disabled_flag", indents + 1);
    dump_text_uint32_t(object.pcm_loop_filter_disabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "long_term_ref_pics_present_flag", indents + 1);
    dump_text_uint32_t(object.long_term_ref_pics_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_temporal_mvp_enabled_flag", indents + 1);
    dump_text_uint32_t(object.sps_temporal_mvp_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "strong_intra_smoothing_enabled_flag", indents + 1);
    dump_text_uint32_t(object.strong_intra_smoothing_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "vui_parameters_present_flag", indents + 1);
    dump_text_uint32_t(object.vui_parameters_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_extension_present_flag", indents + 1);
    dump_text_uint32_t(object.sps_extension_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_range_extension_flag", indents + 1);
    dump_text_uint32_t(object.sps_range_extension_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "transform_skip_rotation_enabled_flag", indents + 1);
    dump_text_uint32_t(object.transform_skip_rotation_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "transform_skip_context_enabled_flag", indents + 1);
    dump_text_uint32_t(object.transform_skip_context_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "implicit_rdpcm_enabled_flag", indents + 1);
    dump_text_uint32_t(object.implicit_rdpcm_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "explicit_rdpcm_enabled_flag", indents + 1);
    dump_text_uint32_t(object.explicit_rdpcm_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "extended_precision_processing_flag", indents + 1);
    dump_text_uint32_t(object.extended_precision_processing_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "intra_smoothing_disabled_flag", indents + 1);
    dump_text_uint32_t(object.intra_smoothing_disabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "high_precision_offsets_enabled_flag", indents + 1);
    dump_text_uint32_t(object.high_precision_offsets_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "persistent_rice_adaptation_enabled_flag", indents + 1);
    dump_text_uint32_t(object.persistent_rice_adaptation_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cabac_bypass_alignment_enabled_flag", indents + 1);
    dump_text_uint32_t(object.cabac_bypass_alignment_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_scc_extension_flag", indents + 1);
    dump_text_uint32_t(object.sps_scc_extension_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_curr_pic_ref_enabled_flag", indents + 1);
    dump_text_uint32_t(object.sps_curr_pic_ref_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "palette_mode_enabled_flag", indents + 1);
    dump_text_uint32_t(object.palette_mode_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sps_palette_predictor_initializers_present_flag", indents + 1);
    dump_text_uint32_t(object.sps_palette_predictor_initializers_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "intra_boundary_filtering_disabled_flag", indents + 1);
    dump_text_uint32_t(object.intra_boundary_filtering_disabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265ShortTermRefPicSetFlags(const StdVideoH265ShortTermRefPicSetFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "inter_ref_pic_set_prediction_flag", indents + 1);
    dump_text_uint32_t(object.inter_ref_pic_set_prediction_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_rps_sign", indents + 1);
    dump_text_uint32_t(object.delta_rps_sign, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265ShortTermRefPicSet(const StdVideoH265ShortTermRefPicSet& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265ShortTermRefPicSetFlags", "flags", indents + 1);
    dump_text_StdVideoH265ShortTermRefPicSetFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "delta_idx_minus1", indents + 1);
    dump_text_uint32_t(object.delta_idx_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "use_delta_flag", indents + 1);
    dump_text_uint16_t(object.use_delta_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "abs_delta_rps_minus1", indents + 1);
    dump_text_uint16_t(object.abs_delta_rps_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "used_by_curr_pic_flag", indents + 1);
    dump_text_uint16_t(object.used_by_curr_pic_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "used_by_curr_pic_s0_flag", indents + 1);
    dump_text_uint16_t(object.used_by_curr_pic_s0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "used_by_curr_pic_s1_flag", indents + 1);
    dump_text_uint16_t(object.used_by_curr_pic_s1_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "reserved1", indents + 1);
    dump_text_uint16_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved2", indents + 1);
    dump_text_uint8_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved3", indents + 1);
    dump_text_uint8_t(object.reserved3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_negative_pics", indents + 1);
    dump_text_uint8_t(object.num_negative_pics, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_positive_pics", indents + 1);
    dump_text_uint8_t(object.num_positive_pics, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.delta_poc_s0_minus1, STD_VIDEO_H265_MAX_DPB_SIZE, settings, "uint16_t[STD_VIDEO_H265_MAX_DPB_SIZE]", "uint16_t", "delta_poc_s0_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_DPB_SIZE; ++i) {
        std::stringstream stream;
        stream << "delta_poc_s0_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.delta_poc_s0_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_poc_s0_minus1, STD_VIDEO_H265_MAX_DPB_SIZE, settings, indents + 1);
    dump_text_array_start(object.delta_poc_s1_minus1, STD_VIDEO_H265_MAX_DPB_SIZE, settings, "uint16_t[STD_VIDEO_H265_MAX_DPB_SIZE]", "uint16_t", "delta_poc_s1_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_DPB_SIZE; ++i) {
        std::stringstream stream;
        stream << "delta_poc_s1_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.delta_poc_s1_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_poc_s1_minus1, STD_VIDEO_H265_MAX_DPB_SIZE, settings, indents + 1);
}
void dump_text_StdVideoH265LongTermRefPicsSps(const StdVideoH265LongTermRefPicsSps& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t", "used_by_curr_pic_lt_sps_flag", indents + 1);
    dump_text_uint32_t(object.used_by_curr_pic_lt_sps_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.lt_ref_pic_poc_lsb_sps, STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS, settings, "uint32_t[STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS]", "uint32_t", "lt_ref_pic_poc_lsb_sps", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS; ++i) {
        std::stringstream stream;
        stream << "lt_ref_pic_poc_lsb_sps" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.lt_ref_pic_poc_lsb_sps[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.lt_ref_pic_poc_lsb_sps, STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS, settings, indents + 1);
}
void dump_text_StdVideoH265SequenceParameterSet(const StdVideoH265SequenceParameterSet& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265SpsFlags", "flags", indents + 1);
    dump_text_StdVideoH265SpsFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265ChromaFormatIdc", "chroma_format_idc", indents + 1);
    dump_text_StdVideoH265ChromaFormatIdc(object.chroma_format_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "pic_width_in_luma_samples", indents + 1);
    dump_text_uint32_t(object.pic_width_in_luma_samples, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "pic_height_in_luma_samples", indents + 1);
    dump_text_uint32_t(object.pic_height_in_luma_samples, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_video_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.sps_video_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_max_sub_layers_minus1", indents + 1);
    dump_text_uint8_t(object.sps_max_sub_layers_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.sps_seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "bit_depth_luma_minus8", indents + 1);
    dump_text_uint8_t(object.bit_depth_luma_minus8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "bit_depth_chroma_minus8", indents + 1);
    dump_text_uint8_t(object.bit_depth_chroma_minus8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_max_pic_order_cnt_lsb_minus4", indents + 1);
    dump_text_uint8_t(object.log2_max_pic_order_cnt_lsb_minus4, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_min_luma_coding_block_size_minus3", indents + 1);
    dump_text_uint8_t(object.log2_min_luma_coding_block_size_minus3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_diff_max_min_luma_coding_block_size", indents + 1);
    dump_text_uint8_t(object.log2_diff_max_min_luma_coding_block_size, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_min_luma_transform_block_size_minus2", indents + 1);
    dump_text_uint8_t(object.log2_min_luma_transform_block_size_minus2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_diff_max_min_luma_transform_block_size", indents + 1);
    dump_text_uint8_t(object.log2_diff_max_min_luma_transform_block_size, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_transform_hierarchy_depth_inter", indents + 1);
    dump_text_uint8_t(object.max_transform_hierarchy_depth_inter, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "max_transform_hierarchy_depth_intra", indents + 1);
    dump_text_uint8_t(object.max_transform_hierarchy_depth_intra, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_short_term_ref_pic_sets", indents + 1);
    dump_text_uint8_t(object.num_short_term_ref_pic_sets, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_long_term_ref_pics_sps", indents + 1);
    dump_text_uint8_t(object.num_long_term_ref_pics_sps, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pcm_sample_bit_depth_luma_minus1", indents + 1);
    dump_text_uint8_t(object.pcm_sample_bit_depth_luma_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pcm_sample_bit_depth_chroma_minus1", indents + 1);
    dump_text_uint8_t(object.pcm_sample_bit_depth_chroma_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_min_pcm_luma_coding_block_size_minus3", indents + 1);
    dump_text_uint8_t(object.log2_min_pcm_luma_coding_block_size_minus3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_diff_max_min_pcm_luma_coding_block_size", indents + 1);
    dump_text_uint8_t(object.log2_diff_max_min_pcm_luma_coding_block_size, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved2", indents + 1);
    dump_text_uint8_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "palette_max_size", indents + 1);
    dump_text_uint8_t(object.palette_max_size, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "delta_palette_max_predictor_size", indents + 1);
    dump_text_uint8_t(object.delta_palette_max_predictor_size, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "motion_vector_resolution_control_idc", indents + 1);
    dump_text_uint8_t(object.motion_vector_resolution_control_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_num_palette_predictor_initializers_minus1", indents + 1);
    dump_text_uint8_t(object.sps_num_palette_predictor_initializers_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "conf_win_left_offset", indents + 1);
    dump_text_uint32_t(object.conf_win_left_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "conf_win_right_offset", indents + 1);
    dump_text_uint32_t(object.conf_win_right_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "conf_win_top_offset", indents + 1);
    dump_text_uint32_t(object.conf_win_top_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "conf_win_bottom_offset", indents + 1);
    dump_text_uint32_t(object.conf_win_bottom_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pProfileTierLevel == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265ProfileTierLevel*", "pProfileTierLevel", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265ProfileTierLevel*", "pProfileTierLevel", indents + 1);
        dump_text_StdVideoH265ProfileTierLevel(*object.pProfileTierLevel, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pDecPicBufMgr == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265DecPicBufMgr*", "pDecPicBufMgr", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265DecPicBufMgr*", "pDecPicBufMgr", indents + 1);
        dump_text_StdVideoH265DecPicBufMgr(*object.pDecPicBufMgr, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pScalingLists == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265ScalingLists*", "pScalingLists", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265ScalingLists*", "pScalingLists", indents + 1);
        dump_text_StdVideoH265ScalingLists(*object.pScalingLists, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pShortTermRefPicSet == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265ShortTermRefPicSet*", "pShortTermRefPicSet", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265ShortTermRefPicSet*", "pShortTermRefPicSet", indents + 1);
        dump_text_StdVideoH265ShortTermRefPicSet(*object.pShortTermRefPicSet, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pLongTermRefPicsSps == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265LongTermRefPicsSps*", "pLongTermRefPicsSps", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265LongTermRefPicsSps*", "pLongTermRefPicsSps", indents + 1);
        dump_text_StdVideoH265LongTermRefPicsSps(*object.pLongTermRefPicsSps, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pSequenceParameterSetVui == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265SequenceParameterSetVui*", "pSequenceParameterSetVui", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265SequenceParameterSetVui*", "pSequenceParameterSetVui", indents + 1);
        dump_text_StdVideoH265SequenceParameterSetVui(*object.pSequenceParameterSetVui, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pPredictorPaletteEntries == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265PredictorPaletteEntries*", "pPredictorPaletteEntries", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265PredictorPaletteEntries*", "pPredictorPaletteEntries", indents + 1);
        dump_text_StdVideoH265PredictorPaletteEntries(*object.pPredictorPaletteEntries, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoH265PpsFlags(const StdVideoH265PpsFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "dependent_slice_segments_enabled_flag", indents + 1);
    dump_text_uint32_t(object.dependent_slice_segments_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "output_flag_present_flag", indents + 1);
    dump_text_uint32_t(object.output_flag_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "sign_data_hiding_enabled_flag", indents + 1);
    dump_text_uint32_t(object.sign_data_hiding_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cabac_init_present_flag", indents + 1);
    dump_text_uint32_t(object.cabac_init_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "constrained_intra_pred_flag", indents + 1);
    dump_text_uint32_t(object.constrained_intra_pred_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "transform_skip_enabled_flag", indents + 1);
    dump_text_uint32_t(object.transform_skip_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cu_qp_delta_enabled_flag", indents + 1);
    dump_text_uint32_t(object.cu_qp_delta_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_slice_chroma_qp_offsets_present_flag", indents + 1);
    dump_text_uint32_t(object.pps_slice_chroma_qp_offsets_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "weighted_pred_flag", indents + 1);
    dump_text_uint32_t(object.weighted_pred_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "weighted_bipred_flag", indents + 1);
    dump_text_uint32_t(object.weighted_bipred_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "transquant_bypass_enabled_flag", indents + 1);
    dump_text_uint32_t(object.transquant_bypass_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "tiles_enabled_flag", indents + 1);
    dump_text_uint32_t(object.tiles_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "entropy_coding_sync_enabled_flag", indents + 1);
    dump_text_uint32_t(object.entropy_coding_sync_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "uniform_spacing_flag", indents + 1);
    dump_text_uint32_t(object.uniform_spacing_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "loop_filter_across_tiles_enabled_flag", indents + 1);
    dump_text_uint32_t(object.loop_filter_across_tiles_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_loop_filter_across_slices_enabled_flag", indents + 1);
    dump_text_uint32_t(object.pps_loop_filter_across_slices_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "deblocking_filter_control_present_flag", indents + 1);
    dump_text_uint32_t(object.deblocking_filter_control_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "deblocking_filter_override_enabled_flag", indents + 1);
    dump_text_uint32_t(object.deblocking_filter_override_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_deblocking_filter_disabled_flag", indents + 1);
    dump_text_uint32_t(object.pps_deblocking_filter_disabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_scaling_list_data_present_flag", indents + 1);
    dump_text_uint32_t(object.pps_scaling_list_data_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "lists_modification_present_flag", indents + 1);
    dump_text_uint32_t(object.lists_modification_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "slice_segment_header_extension_present_flag", indents + 1);
    dump_text_uint32_t(object.slice_segment_header_extension_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_extension_present_flag", indents + 1);
    dump_text_uint32_t(object.pps_extension_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cross_component_prediction_enabled_flag", indents + 1);
    dump_text_uint32_t(object.cross_component_prediction_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "chroma_qp_offset_list_enabled_flag", indents + 1);
    dump_text_uint32_t(object.chroma_qp_offset_list_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_curr_pic_ref_enabled_flag", indents + 1);
    dump_text_uint32_t(object.pps_curr_pic_ref_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "residual_adaptive_colour_transform_enabled_flag", indents + 1);
    dump_text_uint32_t(object.residual_adaptive_colour_transform_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_slice_act_qp_offsets_present_flag", indents + 1);
    dump_text_uint32_t(object.pps_slice_act_qp_offsets_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_palette_predictor_initializers_present_flag", indents + 1);
    dump_text_uint32_t(object.pps_palette_predictor_initializers_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "monochrome_palette_flag", indents + 1);
    dump_text_uint32_t(object.monochrome_palette_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pps_range_extension_flag", indents + 1);
    dump_text_uint32_t(object.pps_range_extension_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoH265PictureParameterSet(const StdVideoH265PictureParameterSet& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoH265PpsFlags", "flags", indents + 1);
    dump_text_StdVideoH265PpsFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_pic_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pps_pic_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pps_seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_video_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.sps_video_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_extra_slice_header_bits", indents + 1);
    dump_text_uint8_t(object.num_extra_slice_header_bits, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l0_default_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l0_default_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l1_default_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l1_default_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "init_qp_minus26", indents + 1);
    dump_text_int8_t(object.init_qp_minus26, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "diff_cu_qp_delta_depth", indents + 1);
    dump_text_uint8_t(object.diff_cu_qp_delta_depth, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_cb_qp_offset", indents + 1);
    dump_text_int8_t(object.pps_cb_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_cr_qp_offset", indents + 1);
    dump_text_int8_t(object.pps_cr_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_beta_offset_div2", indents + 1);
    dump_text_int8_t(object.pps_beta_offset_div2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_tc_offset_div2", indents + 1);
    dump_text_int8_t(object.pps_tc_offset_div2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_parallel_merge_level_minus2", indents + 1);
    dump_text_uint8_t(object.log2_parallel_merge_level_minus2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_max_transform_skip_block_size_minus2", indents + 1);
    dump_text_uint8_t(object.log2_max_transform_skip_block_size_minus2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "diff_cu_chroma_qp_offset_depth", indents + 1);
    dump_text_uint8_t(object.diff_cu_chroma_qp_offset_depth, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_qp_offset_list_len_minus1", indents + 1);
    dump_text_uint8_t(object.chroma_qp_offset_list_len_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.cb_qp_offset_list, STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE, settings, "int8_t[STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE]", "int8_t", "cb_qp_offset_list", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cb_qp_offset_list" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.cb_qp_offset_list[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cb_qp_offset_list, STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.cr_qp_offset_list, STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE, settings, "int8_t[STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE]", "int8_t", "cr_qp_offset_list", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "cr_qp_offset_list" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.cr_qp_offset_list[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cr_qp_offset_list, STD_VIDEO_H265_CHROMA_QP_OFFSET_LIST_SIZE, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_sao_offset_scale_luma", indents + 1);
    dump_text_uint8_t(object.log2_sao_offset_scale_luma, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "log2_sao_offset_scale_chroma", indents + 1);
    dump_text_uint8_t(object.log2_sao_offset_scale_chroma, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_act_y_qp_offset_plus5", indents + 1);
    dump_text_int8_t(object.pps_act_y_qp_offset_plus5, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_act_cb_qp_offset_plus5", indents + 1);
    dump_text_int8_t(object.pps_act_cb_qp_offset_plus5, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "pps_act_cr_qp_offset_plus3", indents + 1);
    dump_text_int8_t(object.pps_act_cr_qp_offset_plus3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_num_palette_predictor_initializers", indents + 1);
    dump_text_uint8_t(object.pps_num_palette_predictor_initializers, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "luma_bit_depth_entry_minus8", indents + 1);
    dump_text_uint8_t(object.luma_bit_depth_entry_minus8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "chroma_bit_depth_entry_minus8", indents + 1);
    dump_text_uint8_t(object.chroma_bit_depth_entry_minus8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_tile_columns_minus1", indents + 1);
    dump_text_uint8_t(object.num_tile_columns_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_tile_rows_minus1", indents + 1);
    dump_text_uint8_t(object.num_tile_rows_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved2", indents + 1);
    dump_text_uint8_t(object.reserved2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.column_width_minus1, STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_COLS_LIST_SIZE, settings, "uint16_t[STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_COLS_LIST_SIZE]", "uint16_t", "column_width_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_COLS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "column_width_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.column_width_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.column_width_minus1, STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_COLS_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.row_height_minus1, STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_ROWS_LIST_SIZE, settings, "uint16_t[STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_ROWS_LIST_SIZE]", "uint16_t", "row_height_minus1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_ROWS_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "row_height_minus1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.row_height_minus1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.row_height_minus1, STD_VIDEO_H265_CHROMA_QP_OFFSET_TILE_ROWS_LIST_SIZE, settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "reserved3", indents + 1);
    dump_text_uint32_t(object.reserved3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pScalingLists == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265ScalingLists*", "pScalingLists", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265ScalingLists*", "pScalingLists", indents + 1);
        dump_text_StdVideoH265ScalingLists(*object.pScalingLists, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pPredictorPaletteEntries == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265PredictorPaletteEntries*", "pPredictorPaletteEntries", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265PredictorPaletteEntries*", "pPredictorPaletteEntries", indents + 1);
        dump_text_StdVideoH265PredictorPaletteEntries(*object.pPredictorPaletteEntries, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoDecodeH265PictureInfoFlags(const StdVideoDecodeH265PictureInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "IrapPicFlag", indents + 1);
    dump_text_uint32_t(object.IrapPicFlag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "IdrPicFlag", indents + 1);
    dump_text_uint32_t(object.IdrPicFlag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "IsReference", indents + 1);
    dump_text_uint32_t(object.IsReference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "short_term_ref_pic_set_sps_flag", indents + 1);
    dump_text_uint32_t(object.short_term_ref_pic_set_sps_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoDecodeH265PictureInfo(const StdVideoDecodeH265PictureInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoDecodeH265PictureInfoFlags", "flags", indents + 1);
    dump_text_StdVideoDecodeH265PictureInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_video_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.sps_video_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pps_seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_pic_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pps_pic_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "NumDeltaPocsOfRefRpsIdx", indents + 1);
    dump_text_uint8_t(object.NumDeltaPocsOfRefRpsIdx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "PicOrderCntVal", indents + 1);
    dump_text_int32_t(object.PicOrderCntVal, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "NumBitsForSTRefPicSetInSlice", indents + 1);
    dump_text_uint16_t(object.NumBitsForSTRefPicSetInSlice, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "reserved", indents + 1);
    dump_text_uint16_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.RefPicSetStCurrBefore, STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE, settings, "uint8_t[STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE]", "uint8_t", "RefPicSetStCurrBefore", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "RefPicSetStCurrBefore" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicSetStCurrBefore[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicSetStCurrBefore, STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.RefPicSetStCurrAfter, STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE, settings, "uint8_t[STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE]", "uint8_t", "RefPicSetStCurrAfter", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "RefPicSetStCurrAfter" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicSetStCurrAfter[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicSetStCurrAfter, STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE, settings, indents + 1);
    dump_text_array_start(object.RefPicSetLtCurr, STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE, settings, "uint8_t[STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE]", "uint8_t", "RefPicSetLtCurr", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE; ++i) {
        std::stringstream stream;
        stream << "RefPicSetLtCurr" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicSetLtCurr[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicSetLtCurr, STD_VIDEO_DECODE_H265_REF_PIC_SET_LIST_SIZE, settings, indents + 1);
}
void dump_text_StdVideoDecodeH265ReferenceInfoFlags(const StdVideoDecodeH265ReferenceInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "used_for_long_term_reference", indents + 1);
    dump_text_uint32_t(object.used_for_long_term_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "unused_for_reference", indents + 1);
    dump_text_uint32_t(object.unused_for_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoDecodeH265ReferenceInfo(const StdVideoDecodeH265ReferenceInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoDecodeH265ReferenceInfoFlags", "flags", indents + 1);
    dump_text_StdVideoDecodeH265ReferenceInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "PicOrderCntVal", indents + 1);
    dump_text_int32_t(object.PicOrderCntVal, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH265WeightTableFlags(const StdVideoEncodeH265WeightTableFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint16_t", "luma_weight_l0_flag", indents + 1);
    dump_text_uint16_t(object.luma_weight_l0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "chroma_weight_l0_flag", indents + 1);
    dump_text_uint16_t(object.chroma_weight_l0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "luma_weight_l1_flag", indents + 1);
    dump_text_uint16_t(object.luma_weight_l1_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "chroma_weight_l1_flag", indents + 1);
    dump_text_uint16_t(object.chroma_weight_l1_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH265WeightTable(const StdVideoEncodeH265WeightTable& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH265WeightTableFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH265WeightTableFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "luma_log2_weight_denom", indents + 1);
    dump_text_uint8_t(object.luma_log2_weight_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "delta_chroma_log2_weight_denom", indents + 1);
    dump_text_int8_t(object.delta_chroma_log2_weight_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.delta_luma_weight_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "int8_t", "delta_luma_weight_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "delta_luma_weight_l0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.delta_luma_weight_l0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_luma_weight_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.luma_offset_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "int8_t", "luma_offset_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "luma_offset_l0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.luma_offset_l0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.luma_offset_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.delta_chroma_weight_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF][STD_VIDEO_H265_MAX_CHROMA_PLANES]", "int8_t", "delta_chroma_weight_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "delta_chroma_weight_l0" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.delta_chroma_weight_l0[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.delta_chroma_weight_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, indents + 1);
    dump_text_array_start(object.delta_chroma_offset_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF][STD_VIDEO_H265_MAX_CHROMA_PLANES]", "int8_t", "delta_chroma_offset_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "delta_chroma_offset_l0" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.delta_chroma_offset_l0[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.delta_chroma_offset_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, indents + 1);
    dump_text_array_start(object.delta_luma_weight_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "int8_t", "delta_luma_weight_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "delta_luma_weight_l1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.delta_luma_weight_l1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_luma_weight_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.luma_offset_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "int8_t", "luma_offset_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "luma_offset_l1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.luma_offset_l1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.luma_offset_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.delta_chroma_weight_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF][STD_VIDEO_H265_MAX_CHROMA_PLANES]", "int8_t", "delta_chroma_weight_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "delta_chroma_weight_l1" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.delta_chroma_weight_l1[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.delta_chroma_weight_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, indents + 1);
    dump_text_array_start(object.delta_chroma_offset_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, "int8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF][STD_VIDEO_H265_MAX_CHROMA_PLANES]", "int8_t", "delta_chroma_offset_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
      for (size_t j = 0; j < STD_VIDEO_H265_MAX_CHROMA_PLANES; ++j) {
        std::stringstream stream;
       stream << "delta_chroma_offset_l1" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1);
        dump_text_int8_t(object.delta_chroma_offset_l1[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.delta_chroma_offset_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF*STD_VIDEO_H265_MAX_CHROMA_PLANES, settings, indents + 1);
}
void dump_text_StdVideoEncodeH265SliceSegmentHeaderFlags(const StdVideoEncodeH265SliceSegmentHeaderFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "first_slice_segment_in_pic_flag", indents + 1);
    dump_text_uint32_t(object.first_slice_segment_in_pic_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "dependent_slice_segment_flag", indents + 1);
    dump_text_uint32_t(object.dependent_slice_segment_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "slice_sao_luma_flag", indents + 1);
    dump_text_uint32_t(object.slice_sao_luma_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "slice_sao_chroma_flag", indents + 1);
    dump_text_uint32_t(object.slice_sao_chroma_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "num_ref_idx_active_override_flag", indents + 1);
    dump_text_uint32_t(object.num_ref_idx_active_override_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "mvd_l1_zero_flag", indents + 1);
    dump_text_uint32_t(object.mvd_l1_zero_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cabac_init_flag", indents + 1);
    dump_text_uint32_t(object.cabac_init_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cu_chroma_qp_offset_enabled_flag", indents + 1);
    dump_text_uint32_t(object.cu_chroma_qp_offset_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "deblocking_filter_override_flag", indents + 1);
    dump_text_uint32_t(object.deblocking_filter_override_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "slice_deblocking_filter_disabled_flag", indents + 1);
    dump_text_uint32_t(object.slice_deblocking_filter_disabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "collocated_from_l0_flag", indents + 1);
    dump_text_uint32_t(object.collocated_from_l0_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "slice_loop_filter_across_slices_enabled_flag", indents + 1);
    dump_text_uint32_t(object.slice_loop_filter_across_slices_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 20", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH265SliceSegmentHeader(const StdVideoEncodeH265SliceSegmentHeader& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH265SliceSegmentHeaderFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH265SliceSegmentHeaderFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265SliceType", "slice_type", indents + 1);
    dump_text_StdVideoH265SliceType(object.slice_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "slice_segment_address", indents + 1);
    dump_text_uint32_t(object.slice_segment_address, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "collocated_ref_idx", indents + 1);
    dump_text_uint8_t(object.collocated_ref_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "MaxNumMergeCand", indents + 1);
    dump_text_uint8_t(object.MaxNumMergeCand, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_cb_qp_offset", indents + 1);
    dump_text_int8_t(object.slice_cb_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_cr_qp_offset", indents + 1);
    dump_text_int8_t(object.slice_cr_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_beta_offset_div2", indents + 1);
    dump_text_int8_t(object.slice_beta_offset_div2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_tc_offset_div2", indents + 1);
    dump_text_int8_t(object.slice_tc_offset_div2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_act_y_qp_offset", indents + 1);
    dump_text_int8_t(object.slice_act_y_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_act_cb_qp_offset", indents + 1);
    dump_text_int8_t(object.slice_act_cb_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_act_cr_qp_offset", indents + 1);
    dump_text_int8_t(object.slice_act_cr_qp_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "slice_qp_delta", indents + 1);
    dump_text_int8_t(object.slice_qp_delta, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "reserved1", indents + 1);
    dump_text_uint16_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    if (object.pWeightTable == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH265WeightTable*", "pWeightTable", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH265WeightTable*", "pWeightTable", indents + 1);
        dump_text_StdVideoEncodeH265WeightTable(*object.pWeightTable, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoEncodeH265ReferenceListsInfoFlags(const StdVideoEncodeH265ReferenceListsInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "ref_pic_list_modification_flag_l0", indents + 1);
    dump_text_uint32_t(object.ref_pic_list_modification_flag_l0, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "ref_pic_list_modification_flag_l1", indents + 1);
    dump_text_uint32_t(object.ref_pic_list_modification_flag_l1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH265ReferenceListsInfo(const StdVideoEncodeH265ReferenceListsInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH265ReferenceListsInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH265ReferenceListsInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l0_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l0_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_ref_idx_l1_active_minus1", indents + 1);
    dump_text_uint8_t(object.num_ref_idx_l1_active_minus1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.RefPicList0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "uint8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "uint8_t", "RefPicList0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "RefPicList0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicList0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicList0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.RefPicList1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "uint8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "uint8_t", "RefPicList1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "RefPicList1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.RefPicList1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.RefPicList1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.list_entry_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "uint8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "uint8_t", "list_entry_l0", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "list_entry_l0" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.list_entry_l0[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.list_entry_l0, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
    dump_text_array_start(object.list_entry_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, "uint8_t[STD_VIDEO_H265_MAX_NUM_LIST_REF]", "uint8_t", "list_entry_l1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_NUM_LIST_REF; ++i) {
        std::stringstream stream;
        stream << "list_entry_l1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.list_entry_l1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.list_entry_l1, STD_VIDEO_H265_MAX_NUM_LIST_REF, settings, indents + 1);
}
void dump_text_StdVideoEncodeH265PictureInfoFlags(const StdVideoEncodeH265PictureInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "is_reference", indents + 1);
    dump_text_uint32_t(object.is_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "IrapPicFlag", indents + 1);
    dump_text_uint32_t(object.IrapPicFlag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "used_for_long_term_reference", indents + 1);
    dump_text_uint32_t(object.used_for_long_term_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "discardable_flag", indents + 1);
    dump_text_uint32_t(object.discardable_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "cross_layer_bla_flag", indents + 1);
    dump_text_uint32_t(object.cross_layer_bla_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "pic_output_flag", indents + 1);
    dump_text_uint32_t(object.pic_output_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "no_output_of_prior_pics_flag", indents + 1);
    dump_text_uint32_t(object.no_output_of_prior_pics_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "short_term_ref_pic_set_sps_flag", indents + 1);
    dump_text_uint32_t(object.short_term_ref_pic_set_sps_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "slice_temporal_mvp_enabled_flag", indents + 1);
    dump_text_uint32_t(object.slice_temporal_mvp_enabled_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 23", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH265LongTermRefPics(const StdVideoEncodeH265LongTermRefPics& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint8_t", "num_long_term_sps", indents + 1);
    dump_text_uint8_t(object.num_long_term_sps, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_long_term_pics", indents + 1);
    dump_text_uint8_t(object.num_long_term_pics, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.lt_idx_sps, STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS, settings, "uint8_t[STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS]", "uint8_t", "lt_idx_sps", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS; ++i) {
        std::stringstream stream;
        stream << "lt_idx_sps" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.lt_idx_sps[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.lt_idx_sps, STD_VIDEO_H265_MAX_LONG_TERM_REF_PICS_SPS, settings, indents + 1);
    dump_text_array_start(object.poc_lsb_lt, STD_VIDEO_H265_MAX_LONG_TERM_PICS, settings, "uint8_t[STD_VIDEO_H265_MAX_LONG_TERM_PICS]", "uint8_t", "poc_lsb_lt", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_LONG_TERM_PICS; ++i) {
        std::stringstream stream;
        stream << "poc_lsb_lt" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.poc_lsb_lt[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.poc_lsb_lt, STD_VIDEO_H265_MAX_LONG_TERM_PICS, settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "used_by_curr_pic_lt_flag", indents + 1);
    dump_text_uint16_t(object.used_by_curr_pic_lt_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.delta_poc_msb_present_flag, STD_VIDEO_H265_MAX_DELTA_POC, settings, "uint8_t[STD_VIDEO_H265_MAX_DELTA_POC]", "uint8_t", "delta_poc_msb_present_flag", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_DELTA_POC; ++i) {
        std::stringstream stream;
        stream << "delta_poc_msb_present_flag" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.delta_poc_msb_present_flag[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_poc_msb_present_flag, STD_VIDEO_H265_MAX_DELTA_POC, settings, indents + 1);
    dump_text_array_start(object.delta_poc_msb_cycle_lt, STD_VIDEO_H265_MAX_DELTA_POC, settings, "uint8_t[STD_VIDEO_H265_MAX_DELTA_POC]", "uint8_t", "delta_poc_msb_cycle_lt", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_H265_MAX_DELTA_POC; ++i) {
        std::stringstream stream;
        stream << "delta_poc_msb_cycle_lt" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.delta_poc_msb_cycle_lt[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_poc_msb_cycle_lt, STD_VIDEO_H265_MAX_DELTA_POC, settings, indents + 1);
}
void dump_text_StdVideoEncodeH265PictureInfo(const StdVideoEncodeH265PictureInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH265PictureInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH265PictureInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265PictureType", "pic_type", indents + 1);
    dump_text_StdVideoH265PictureType(object.pic_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "sps_video_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.sps_video_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_seq_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pps_seq_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "pps_pic_parameter_set_id", indents + 1);
    dump_text_uint8_t(object.pps_pic_parameter_set_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "short_term_ref_pic_set_idx", indents + 1);
    dump_text_uint8_t(object.short_term_ref_pic_set_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "PicOrderCntVal", indents + 1);
    dump_text_int32_t(object.PicOrderCntVal, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "TemporalId", indents + 1);
    dump_text_uint8_t(object.TemporalId, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved1, 7, settings, "uint8_t[7]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 7; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 7, settings, indents + 1);
    if (object.pRefLists == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH265ReferenceListsInfo*", "pRefLists", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH265ReferenceListsInfo*", "pRefLists", indents + 1);
        dump_text_StdVideoEncodeH265ReferenceListsInfo(*object.pRefLists, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pShortTermRefPicSet == NULL) {
        dump_text_nullptr(settings, "const StdVideoH265ShortTermRefPicSet*", "pShortTermRefPicSet", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoH265ShortTermRefPicSet*", "pShortTermRefPicSet", indents + 1);
        dump_text_StdVideoH265ShortTermRefPicSet(*object.pShortTermRefPicSet, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pLongTermRefPics == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeH265LongTermRefPics*", "pLongTermRefPics", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeH265LongTermRefPics*", "pLongTermRefPics", indents + 1);
        dump_text_StdVideoEncodeH265LongTermRefPics(*object.pLongTermRefPics, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoEncodeH265ReferenceInfoFlags(const StdVideoEncodeH265ReferenceInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "used_for_long_term_reference", indents + 1);
    dump_text_uint32_t(object.used_for_long_term_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "unused_for_reference", indents + 1);
    dump_text_uint32_t(object.unused_for_reference, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeH265ReferenceInfo(const StdVideoEncodeH265ReferenceInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeH265ReferenceInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeH265ReferenceInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoH265PictureType", "pic_type", indents + 1);
    dump_text_StdVideoH265PictureType(object.pic_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int32_t", "PicOrderCntVal", indents + 1);
    dump_text_int32_t(object.PicOrderCntVal, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "TemporalId", indents + 1);
    dump_text_uint8_t(object.TemporalId, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1ColorConfigFlags(const StdVideoAV1ColorConfigFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "mono_chrome", indents + 1);
    dump_text_uint32_t(object.mono_chrome, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "color_range", indents + 1);
    dump_text_uint32_t(object.color_range, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "separate_uv_delta_q", indents + 1);
    dump_text_uint32_t(object.separate_uv_delta_q, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "color_description_present_flag", indents + 1);
    dump_text_uint32_t(object.color_description_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 28", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1ColorConfig(const StdVideoAV1ColorConfig& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1ColorConfigFlags", "flags", indents + 1);
    dump_text_StdVideoAV1ColorConfigFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "BitDepth", indents + 1);
    dump_text_uint8_t(object.BitDepth, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "subsampling_x", indents + 1);
    dump_text_uint8_t(object.subsampling_x, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "subsampling_y", indents + 1);
    dump_text_uint8_t(object.subsampling_y, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1ColorPrimaries", "color_primaries", indents + 1);
    dump_text_StdVideoAV1ColorPrimaries(object.color_primaries, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1TransferCharacteristics", "transfer_characteristics", indents + 1);
    dump_text_StdVideoAV1TransferCharacteristics(object.transfer_characteristics, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1MatrixCoefficients", "matrix_coefficients", indents + 1);
    dump_text_StdVideoAV1MatrixCoefficients(object.matrix_coefficients, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1ChromaSamplePosition", "chroma_sample_position", indents + 1);
    dump_text_StdVideoAV1ChromaSamplePosition(object.chroma_sample_position, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1TimingInfoFlags(const StdVideoAV1TimingInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "equal_picture_interval", indents + 1);
    dump_text_uint32_t(object.equal_picture_interval, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 31", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1TimingInfo(const StdVideoAV1TimingInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1TimingInfoFlags", "flags", indents + 1);
    dump_text_StdVideoAV1TimingInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "num_units_in_display_tick", indents + 1);
    dump_text_uint32_t(object.num_units_in_display_tick, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "time_scale", indents + 1);
    dump_text_uint32_t(object.time_scale, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "num_ticks_per_picture_minus_1", indents + 1);
    dump_text_uint32_t(object.num_ticks_per_picture_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1LoopFilterFlags(const StdVideoAV1LoopFilterFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "loop_filter_delta_enabled", indents + 1);
    dump_text_uint32_t(object.loop_filter_delta_enabled, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "loop_filter_delta_update", indents + 1);
    dump_text_uint32_t(object.loop_filter_delta_update, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1LoopFilter(const StdVideoAV1LoopFilter& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1LoopFilterFlags", "flags", indents + 1);
    dump_text_StdVideoAV1LoopFilterFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_array_start(object.loop_filter_level, STD_VIDEO_AV1_MAX_LOOP_FILTER_STRENGTHS, settings, "uint8_t[STD_VIDEO_AV1_MAX_LOOP_FILTER_STRENGTHS]", "uint8_t", "loop_filter_level", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_LOOP_FILTER_STRENGTHS; ++i) {
        std::stringstream stream;
        stream << "loop_filter_level" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.loop_filter_level[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.loop_filter_level, STD_VIDEO_AV1_MAX_LOOP_FILTER_STRENGTHS, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "loop_filter_sharpness", indents + 1);
    dump_text_uint8_t(object.loop_filter_sharpness, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "update_ref_delta", indents + 1);
    dump_text_uint8_t(object.update_ref_delta, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.loop_filter_ref_deltas, STD_VIDEO_AV1_TOTAL_REFS_PER_FRAME, settings, "int8_t[STD_VIDEO_AV1_TOTAL_REFS_PER_FRAME]", "int8_t", "loop_filter_ref_deltas", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_TOTAL_REFS_PER_FRAME; ++i) {
        std::stringstream stream;
        stream << "loop_filter_ref_deltas" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.loop_filter_ref_deltas[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.loop_filter_ref_deltas, STD_VIDEO_AV1_TOTAL_REFS_PER_FRAME, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "update_mode_delta", indents + 1);
    dump_text_uint8_t(object.update_mode_delta, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.loop_filter_mode_deltas, STD_VIDEO_AV1_LOOP_FILTER_ADJUSTMENTS, settings, "int8_t[STD_VIDEO_AV1_LOOP_FILTER_ADJUSTMENTS]", "int8_t", "loop_filter_mode_deltas", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_LOOP_FILTER_ADJUSTMENTS; ++i) {
        std::stringstream stream;
        stream << "loop_filter_mode_deltas" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.loop_filter_mode_deltas[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.loop_filter_mode_deltas, STD_VIDEO_AV1_LOOP_FILTER_ADJUSTMENTS, settings, indents + 1);
}
void dump_text_StdVideoAV1QuantizationFlags(const StdVideoAV1QuantizationFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "using_qmatrix", indents + 1);
    dump_text_uint32_t(object.using_qmatrix, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "diff_uv_delta", indents + 1);
    dump_text_uint32_t(object.diff_uv_delta, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1Quantization(const StdVideoAV1Quantization& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1QuantizationFlags", "flags", indents + 1);
    dump_text_StdVideoAV1QuantizationFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "base_q_idx", indents + 1);
    dump_text_uint8_t(object.base_q_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "DeltaQYDc", indents + 1);
    dump_text_int8_t(object.DeltaQYDc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "DeltaQUDc", indents + 1);
    dump_text_int8_t(object.DeltaQUDc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "DeltaQUAc", indents + 1);
    dump_text_int8_t(object.DeltaQUAc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "DeltaQVDc", indents + 1);
    dump_text_int8_t(object.DeltaQVDc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "int8_t", "DeltaQVAc", indents + 1);
    dump_text_int8_t(object.DeltaQVAc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "qm_y", indents + 1);
    dump_text_uint8_t(object.qm_y, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "qm_u", indents + 1);
    dump_text_uint8_t(object.qm_u, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "qm_v", indents + 1);
    dump_text_uint8_t(object.qm_v, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1Segmentation(const StdVideoAV1Segmentation& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.FeatureEnabled, STD_VIDEO_AV1_MAX_SEGMENTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_SEGMENTS]", "uint8_t", "FeatureEnabled", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_SEGMENTS; ++i) {
        std::stringstream stream;
        stream << "FeatureEnabled" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.FeatureEnabled[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.FeatureEnabled, STD_VIDEO_AV1_MAX_SEGMENTS, settings, indents + 1);
    dump_text_array_start(object.FeatureData, STD_VIDEO_AV1_MAX_SEGMENTS*STD_VIDEO_AV1_SEG_LVL_MAX, settings, "int16_t[STD_VIDEO_AV1_MAX_SEGMENTS][STD_VIDEO_AV1_SEG_LVL_MAX]", "int16_t", "FeatureData", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_SEGMENTS; ++i) {
      for (size_t j = 0; j < STD_VIDEO_AV1_SEG_LVL_MAX; ++j) {
        std::stringstream stream;
       stream << "FeatureData" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int16_t", indexName.c_str(), indents + 1);
        dump_text_int16_t(object.FeatureData[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.FeatureData, STD_VIDEO_AV1_MAX_SEGMENTS*STD_VIDEO_AV1_SEG_LVL_MAX, settings, indents + 1);
}
void dump_text_StdVideoAV1TileInfoFlags(const StdVideoAV1TileInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "uniform_tile_spacing_flag", indents + 1);
    dump_text_uint32_t(object.uniform_tile_spacing_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 31", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1TileInfo(const StdVideoAV1TileInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1TileInfoFlags", "flags", indents + 1);
    dump_text_StdVideoAV1TileInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "TileCols", indents + 1);
    dump_text_uint8_t(object.TileCols, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "TileRows", indents + 1);
    dump_text_uint8_t(object.TileRows, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "context_update_tile_id", indents + 1);
    dump_text_uint16_t(object.context_update_tile_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "tile_size_bytes_minus_1", indents + 1);
    dump_text_uint8_t(object.tile_size_bytes_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved1, 7, settings, "uint8_t[7]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 7; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 7, settings, indents + 1);
    if (object.pMiColStarts == NULL) {
        dump_text_nullptr(settings, "const uint16_t*", "pMiColStarts", indents + 1);
    } else {
        dump_text_value_start(settings, "const uint16_t*", "pMiColStarts", indents + 1);
        dump_text_uint16_t(*object.pMiColStarts, settings, indents + 1);
        dump_text_value_end(settings, indents + 1);
    }
    if (object.pMiRowStarts == NULL) {
        dump_text_nullptr(settings, "const uint16_t*", "pMiRowStarts", indents + 1);
    } else {
        dump_text_value_start(settings, "const uint16_t*", "pMiRowStarts", indents + 1);
        dump_text_uint16_t(*object.pMiRowStarts, settings, indents + 1);
        dump_text_value_end(settings, indents + 1);
    }
    if (object.pWidthInSbsMinus1 == NULL) {
        dump_text_nullptr(settings, "const uint16_t*", "pWidthInSbsMinus1", indents + 1);
    } else {
        dump_text_value_start(settings, "const uint16_t*", "pWidthInSbsMinus1", indents + 1);
        dump_text_uint16_t(*object.pWidthInSbsMinus1, settings, indents + 1);
        dump_text_value_end(settings, indents + 1);
    }
    if (object.pHeightInSbsMinus1 == NULL) {
        dump_text_nullptr(settings, "const uint16_t*", "pHeightInSbsMinus1", indents + 1);
    } else {
        dump_text_value_start(settings, "const uint16_t*", "pHeightInSbsMinus1", indents + 1);
        dump_text_uint16_t(*object.pHeightInSbsMinus1, settings, indents + 1);
        dump_text_value_end(settings, indents + 1);
    }
}
void dump_text_StdVideoAV1CDEF(const StdVideoAV1CDEF& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint8_t", "cdef_damping_minus_3", indents + 1);
    dump_text_uint8_t(object.cdef_damping_minus_3, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cdef_bits", indents + 1);
    dump_text_uint8_t(object.cdef_bits, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.cdef_y_pri_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, "uint8_t[STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS]", "uint8_t", "cdef_y_pri_strength", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS; ++i) {
        std::stringstream stream;
        stream << "cdef_y_pri_strength" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.cdef_y_pri_strength[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cdef_y_pri_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, indents + 1);
    dump_text_array_start(object.cdef_y_sec_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, "uint8_t[STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS]", "uint8_t", "cdef_y_sec_strength", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS; ++i) {
        std::stringstream stream;
        stream << "cdef_y_sec_strength" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.cdef_y_sec_strength[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cdef_y_sec_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, indents + 1);
    dump_text_array_start(object.cdef_uv_pri_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, "uint8_t[STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS]", "uint8_t", "cdef_uv_pri_strength", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS; ++i) {
        std::stringstream stream;
        stream << "cdef_uv_pri_strength" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.cdef_uv_pri_strength[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cdef_uv_pri_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, indents + 1);
    dump_text_array_start(object.cdef_uv_sec_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, "uint8_t[STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS]", "uint8_t", "cdef_uv_sec_strength", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS; ++i) {
        std::stringstream stream;
        stream << "cdef_uv_sec_strength" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.cdef_uv_sec_strength[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.cdef_uv_sec_strength, STD_VIDEO_AV1_MAX_CDEF_FILTER_STRENGTHS, settings, indents + 1);
}
void dump_text_StdVideoAV1LoopRestoration(const StdVideoAV1LoopRestoration& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.FrameRestorationType, STD_VIDEO_AV1_MAX_NUM_PLANES, settings, "StdVideoAV1FrameRestorationType[STD_VIDEO_AV1_MAX_NUM_PLANES]", "StdVideoAV1FrameRestorationType", "FrameRestorationType", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_PLANES; ++i) {
        std::stringstream stream;
        stream << "FrameRestorationType" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "StdVideoAV1FrameRestorationType", indexName.c_str(), indents + 1 + 1);
        dump_text_StdVideoAV1FrameRestorationType(object.FrameRestorationType[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.FrameRestorationType, STD_VIDEO_AV1_MAX_NUM_PLANES, settings, indents + 1);
    dump_text_array_start(object.LoopRestorationSize, STD_VIDEO_AV1_MAX_NUM_PLANES, settings, "uint16_t[STD_VIDEO_AV1_MAX_NUM_PLANES]", "uint16_t", "LoopRestorationSize", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_PLANES; ++i) {
        std::stringstream stream;
        stream << "LoopRestorationSize" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint16_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint16_t(object.LoopRestorationSize[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.LoopRestorationSize, STD_VIDEO_AV1_MAX_NUM_PLANES, settings, indents + 1);
}
void dump_text_StdVideoAV1GlobalMotion(const StdVideoAV1GlobalMotion& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_array_start(object.GmType, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, "uint8_t[STD_VIDEO_AV1_NUM_REF_FRAMES]", "uint8_t", "GmType", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_NUM_REF_FRAMES; ++i) {
        std::stringstream stream;
        stream << "GmType" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.GmType[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.GmType, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, indents + 1);
    dump_text_array_start(object.gm_params, STD_VIDEO_AV1_NUM_REF_FRAMES*STD_VIDEO_AV1_GLOBAL_MOTION_PARAMS, settings, "int32_t[STD_VIDEO_AV1_NUM_REF_FRAMES][STD_VIDEO_AV1_GLOBAL_MOTION_PARAMS]", "int32_t", "gm_params", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_NUM_REF_FRAMES; ++i) {
      for (size_t j = 0; j < STD_VIDEO_AV1_GLOBAL_MOTION_PARAMS; ++j) {
        std::stringstream stream;
       stream << "gm_params" << "[" << i << "][" << j << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int32_t", indexName.c_str(), indents + 1);
        dump_text_int32_t(object.gm_params[i][j], settings, indents + 1+ 1);
        dump_text_value_end(settings, indents + 1 + 1);
      }
    }
    dump_text_array_end(object.gm_params, STD_VIDEO_AV1_NUM_REF_FRAMES*STD_VIDEO_AV1_GLOBAL_MOTION_PARAMS, settings, indents + 1);
}
void dump_text_StdVideoAV1FilmGrainFlags(const StdVideoAV1FilmGrainFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "chroma_scaling_from_luma", indents + 1);
    dump_text_uint32_t(object.chroma_scaling_from_luma, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "overlap_flag", indents + 1);
    dump_text_uint32_t(object.overlap_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "clip_to_restricted_range", indents + 1);
    dump_text_uint32_t(object.clip_to_restricted_range, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "update_grain", indents + 1);
    dump_text_uint32_t(object.update_grain, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 28", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1FilmGrain(const StdVideoAV1FilmGrain& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1FilmGrainFlags", "flags", indents + 1);
    dump_text_StdVideoAV1FilmGrainFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "grain_scaling_minus_8", indents + 1);
    dump_text_uint8_t(object.grain_scaling_minus_8, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "ar_coeff_lag", indents + 1);
    dump_text_uint8_t(object.ar_coeff_lag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "ar_coeff_shift_minus_6", indents + 1);
    dump_text_uint8_t(object.ar_coeff_shift_minus_6, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "grain_scale_shift", indents + 1);
    dump_text_uint8_t(object.grain_scale_shift, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "grain_seed", indents + 1);
    dump_text_uint16_t(object.grain_seed, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "film_grain_params_ref_idx", indents + 1);
    dump_text_uint8_t(object.film_grain_params_ref_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_y_points", indents + 1);
    dump_text_uint8_t(object.num_y_points, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.point_y_value, STD_VIDEO_AV1_MAX_NUM_Y_POINTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_NUM_Y_POINTS]", "uint8_t", "point_y_value", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_Y_POINTS; ++i) {
        std::stringstream stream;
        stream << "point_y_value" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.point_y_value[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.point_y_value, STD_VIDEO_AV1_MAX_NUM_Y_POINTS, settings, indents + 1);
    dump_text_array_start(object.point_y_scaling, STD_VIDEO_AV1_MAX_NUM_Y_POINTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_NUM_Y_POINTS]", "uint8_t", "point_y_scaling", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_Y_POINTS; ++i) {
        std::stringstream stream;
        stream << "point_y_scaling" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.point_y_scaling[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.point_y_scaling, STD_VIDEO_AV1_MAX_NUM_Y_POINTS, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_cb_points", indents + 1);
    dump_text_uint8_t(object.num_cb_points, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.point_cb_value, STD_VIDEO_AV1_MAX_NUM_CB_POINTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_NUM_CB_POINTS]", "uint8_t", "point_cb_value", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_CB_POINTS; ++i) {
        std::stringstream stream;
        stream << "point_cb_value" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.point_cb_value[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.point_cb_value, STD_VIDEO_AV1_MAX_NUM_CB_POINTS, settings, indents + 1);
    dump_text_array_start(object.point_cb_scaling, STD_VIDEO_AV1_MAX_NUM_CB_POINTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_NUM_CB_POINTS]", "uint8_t", "point_cb_scaling", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_CB_POINTS; ++i) {
        std::stringstream stream;
        stream << "point_cb_scaling" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.point_cb_scaling[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.point_cb_scaling, STD_VIDEO_AV1_MAX_NUM_CB_POINTS, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "num_cr_points", indents + 1);
    dump_text_uint8_t(object.num_cr_points, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.point_cr_value, STD_VIDEO_AV1_MAX_NUM_CR_POINTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_NUM_CR_POINTS]", "uint8_t", "point_cr_value", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_CR_POINTS; ++i) {
        std::stringstream stream;
        stream << "point_cr_value" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.point_cr_value[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.point_cr_value, STD_VIDEO_AV1_MAX_NUM_CR_POINTS, settings, indents + 1);
    dump_text_array_start(object.point_cr_scaling, STD_VIDEO_AV1_MAX_NUM_CR_POINTS, settings, "uint8_t[STD_VIDEO_AV1_MAX_NUM_CR_POINTS]", "uint8_t", "point_cr_scaling", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_CR_POINTS; ++i) {
        std::stringstream stream;
        stream << "point_cr_scaling" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.point_cr_scaling[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.point_cr_scaling, STD_VIDEO_AV1_MAX_NUM_CR_POINTS, settings, indents + 1);
    dump_text_array_start(object.ar_coeffs_y_plus_128, STD_VIDEO_AV1_MAX_NUM_POS_LUMA, settings, "int8_t[STD_VIDEO_AV1_MAX_NUM_POS_LUMA]", "int8_t", "ar_coeffs_y_plus_128", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_POS_LUMA; ++i) {
        std::stringstream stream;
        stream << "ar_coeffs_y_plus_128" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.ar_coeffs_y_plus_128[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ar_coeffs_y_plus_128, STD_VIDEO_AV1_MAX_NUM_POS_LUMA, settings, indents + 1);
    dump_text_array_start(object.ar_coeffs_cb_plus_128, STD_VIDEO_AV1_MAX_NUM_POS_CHROMA, settings, "int8_t[STD_VIDEO_AV1_MAX_NUM_POS_CHROMA]", "int8_t", "ar_coeffs_cb_plus_128", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_POS_CHROMA; ++i) {
        std::stringstream stream;
        stream << "ar_coeffs_cb_plus_128" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.ar_coeffs_cb_plus_128[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ar_coeffs_cb_plus_128, STD_VIDEO_AV1_MAX_NUM_POS_CHROMA, settings, indents + 1);
    dump_text_array_start(object.ar_coeffs_cr_plus_128, STD_VIDEO_AV1_MAX_NUM_POS_CHROMA, settings, "int8_t[STD_VIDEO_AV1_MAX_NUM_POS_CHROMA]", "int8_t", "ar_coeffs_cr_plus_128", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_MAX_NUM_POS_CHROMA; ++i) {
        std::stringstream stream;
        stream << "ar_coeffs_cr_plus_128" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.ar_coeffs_cr_plus_128[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ar_coeffs_cr_plus_128, STD_VIDEO_AV1_MAX_NUM_POS_CHROMA, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cb_mult", indents + 1);
    dump_text_uint8_t(object.cb_mult, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cb_luma_mult", indents + 1);
    dump_text_uint8_t(object.cb_luma_mult, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "cb_offset", indents + 1);
    dump_text_uint16_t(object.cb_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cr_mult", indents + 1);
    dump_text_uint8_t(object.cr_mult, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "cr_luma_mult", indents + 1);
    dump_text_uint8_t(object.cr_luma_mult, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "cr_offset", indents + 1);
    dump_text_uint16_t(object.cr_offset, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1SequenceHeaderFlags(const StdVideoAV1SequenceHeaderFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "still_picture", indents + 1);
    dump_text_uint32_t(object.still_picture, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "reduced_still_picture_header", indents + 1);
    dump_text_uint32_t(object.reduced_still_picture_header, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "use_128x128_superblock", indents + 1);
    dump_text_uint32_t(object.use_128x128_superblock, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_filter_intra", indents + 1);
    dump_text_uint32_t(object.enable_filter_intra, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_intra_edge_filter", indents + 1);
    dump_text_uint32_t(object.enable_intra_edge_filter, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_interintra_compound", indents + 1);
    dump_text_uint32_t(object.enable_interintra_compound, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_masked_compound", indents + 1);
    dump_text_uint32_t(object.enable_masked_compound, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_warped_motion", indents + 1);
    dump_text_uint32_t(object.enable_warped_motion, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_dual_filter", indents + 1);
    dump_text_uint32_t(object.enable_dual_filter, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_order_hint", indents + 1);
    dump_text_uint32_t(object.enable_order_hint, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_jnt_comp", indents + 1);
    dump_text_uint32_t(object.enable_jnt_comp, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_ref_frame_mvs", indents + 1);
    dump_text_uint32_t(object.enable_ref_frame_mvs, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_id_numbers_present_flag", indents + 1);
    dump_text_uint32_t(object.frame_id_numbers_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_superres", indents + 1);
    dump_text_uint32_t(object.enable_superres, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_cdef", indents + 1);
    dump_text_uint32_t(object.enable_cdef, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "enable_restoration", indents + 1);
    dump_text_uint32_t(object.enable_restoration, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "film_grain_params_present", indents + 1);
    dump_text_uint32_t(object.film_grain_params_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "timing_info_present_flag", indents + 1);
    dump_text_uint32_t(object.timing_info_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "initial_display_delay_present_flag", indents + 1);
    dump_text_uint32_t(object.initial_display_delay_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 13", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoAV1SequenceHeader(const StdVideoAV1SequenceHeader& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoAV1SequenceHeaderFlags", "flags", indents + 1);
    dump_text_StdVideoAV1SequenceHeaderFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1Profile", "seq_profile", indents + 1);
    dump_text_StdVideoAV1Profile(object.seq_profile, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "frame_width_bits_minus_1", indents + 1);
    dump_text_uint8_t(object.frame_width_bits_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "frame_height_bits_minus_1", indents + 1);
    dump_text_uint8_t(object.frame_height_bits_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "max_frame_width_minus_1", indents + 1);
    dump_text_uint16_t(object.max_frame_width_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "max_frame_height_minus_1", indents + 1);
    dump_text_uint16_t(object.max_frame_height_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "delta_frame_id_length_minus_2", indents + 1);
    dump_text_uint8_t(object.delta_frame_id_length_minus_2, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "additional_frame_id_length_minus_1", indents + 1);
    dump_text_uint8_t(object.additional_frame_id_length_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "order_hint_bits_minus_1", indents + 1);
    dump_text_uint8_t(object.order_hint_bits_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_force_integer_mv", indents + 1);
    dump_text_uint8_t(object.seq_force_integer_mv, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_force_screen_content_tools", indents + 1);
    dump_text_uint8_t(object.seq_force_screen_content_tools, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved1, 5, settings, "uint8_t[5]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 5; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 5, settings, indents + 1);
    if (object.pColorConfig == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1ColorConfig*", "pColorConfig", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1ColorConfig*", "pColorConfig", indents + 1);
        dump_text_StdVideoAV1ColorConfig(*object.pColorConfig, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pTimingInfo == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1TimingInfo*", "pTimingInfo", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1TimingInfo*", "pTimingInfo", indents + 1);
        dump_text_StdVideoAV1TimingInfo(*object.pTimingInfo, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoDecodeAV1PictureInfoFlags(const StdVideoDecodeAV1PictureInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "error_resilient_mode", indents + 1);
    dump_text_uint32_t(object.error_resilient_mode, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "disable_cdf_update", indents + 1);
    dump_text_uint32_t(object.disable_cdf_update, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "use_superres", indents + 1);
    dump_text_uint32_t(object.use_superres, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "render_and_frame_size_different", indents + 1);
    dump_text_uint32_t(object.render_and_frame_size_different, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_screen_content_tools", indents + 1);
    dump_text_uint32_t(object.allow_screen_content_tools, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_filter_switchable", indents + 1);
    dump_text_uint32_t(object.is_filter_switchable, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "force_integer_mv", indents + 1);
    dump_text_uint32_t(object.force_integer_mv, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_size_override_flag", indents + 1);
    dump_text_uint32_t(object.frame_size_override_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "buffer_removal_time_present_flag", indents + 1);
    dump_text_uint32_t(object.buffer_removal_time_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_intrabc", indents + 1);
    dump_text_uint32_t(object.allow_intrabc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_refs_short_signaling", indents + 1);
    dump_text_uint32_t(object.frame_refs_short_signaling, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_high_precision_mv", indents + 1);
    dump_text_uint32_t(object.allow_high_precision_mv, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_motion_mode_switchable", indents + 1);
    dump_text_uint32_t(object.is_motion_mode_switchable, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "use_ref_frame_mvs", indents + 1);
    dump_text_uint32_t(object.use_ref_frame_mvs, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "disable_frame_end_update_cdf", indents + 1);
    dump_text_uint32_t(object.disable_frame_end_update_cdf, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_warped_motion", indents + 1);
    dump_text_uint32_t(object.allow_warped_motion, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "reduced_tx_set", indents + 1);
    dump_text_uint32_t(object.reduced_tx_set, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "reference_select", indents + 1);
    dump_text_uint32_t(object.reference_select, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "skip_mode_present", indents + 1);
    dump_text_uint32_t(object.skip_mode_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_q_present", indents + 1);
    dump_text_uint32_t(object.delta_q_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_lf_present", indents + 1);
    dump_text_uint32_t(object.delta_lf_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_lf_multi", indents + 1);
    dump_text_uint32_t(object.delta_lf_multi, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_enabled", indents + 1);
    dump_text_uint32_t(object.segmentation_enabled, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_update_map", indents + 1);
    dump_text_uint32_t(object.segmentation_update_map, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_temporal_update", indents + 1);
    dump_text_uint32_t(object.segmentation_temporal_update, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_update_data", indents + 1);
    dump_text_uint32_t(object.segmentation_update_data, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "UsesLr", indents + 1);
    dump_text_uint32_t(object.UsesLr, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "usesChromaLr", indents + 1);
    dump_text_uint32_t(object.usesChromaLr, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "apply_grain", indents + 1);
    dump_text_uint32_t(object.apply_grain, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 3", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoDecodeAV1PictureInfo(const StdVideoDecodeAV1PictureInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoDecodeAV1PictureInfoFlags", "flags", indents + 1);
    dump_text_StdVideoDecodeAV1PictureInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1FrameType", "frame_type", indents + 1);
    dump_text_StdVideoAV1FrameType(object.frame_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "current_frame_id", indents + 1);
    dump_text_uint32_t(object.current_frame_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "OrderHint", indents + 1);
    dump_text_uint8_t(object.OrderHint, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "primary_ref_frame", indents + 1);
    dump_text_uint8_t(object.primary_ref_frame, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "refresh_frame_flags", indents + 1);
    dump_text_uint8_t(object.refresh_frame_flags, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1InterpolationFilter", "interpolation_filter", indents + 1);
    dump_text_StdVideoAV1InterpolationFilter(object.interpolation_filter, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1TxMode", "TxMode", indents + 1);
    dump_text_StdVideoAV1TxMode(object.TxMode, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "delta_q_res", indents + 1);
    dump_text_uint8_t(object.delta_q_res, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "delta_lf_res", indents + 1);
    dump_text_uint8_t(object.delta_lf_res, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.SkipModeFrame, STD_VIDEO_AV1_SKIP_MODE_FRAMES, settings, "uint8_t[STD_VIDEO_AV1_SKIP_MODE_FRAMES]", "uint8_t", "SkipModeFrame", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_SKIP_MODE_FRAMES; ++i) {
        std::stringstream stream;
        stream << "SkipModeFrame" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.SkipModeFrame[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.SkipModeFrame, STD_VIDEO_AV1_SKIP_MODE_FRAMES, settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "coded_denom", indents + 1);
    dump_text_uint8_t(object.coded_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved2, 3, settings, "uint8_t[3]", "uint8_t", "reserved2", indents + 1);
    for (size_t i = 0; i < 3; ++i) {
        std::stringstream stream;
        stream << "reserved2" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved2[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved2, 3, settings, indents + 1);
    dump_text_array_start(object.OrderHints, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, "uint8_t[STD_VIDEO_AV1_NUM_REF_FRAMES]", "uint8_t", "OrderHints", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_NUM_REF_FRAMES; ++i) {
        std::stringstream stream;
        stream << "OrderHints" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.OrderHints[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.OrderHints, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, indents + 1);
    dump_text_array_start(object.expectedFrameId, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, "uint32_t[STD_VIDEO_AV1_NUM_REF_FRAMES]", "uint32_t", "expectedFrameId", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_NUM_REF_FRAMES; ++i) {
        std::stringstream stream;
        stream << "expectedFrameId" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.expectedFrameId[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.expectedFrameId, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, indents + 1);
    if (object.pTileInfo == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1TileInfo*", "pTileInfo", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1TileInfo*", "pTileInfo", indents + 1);
        dump_text_StdVideoAV1TileInfo(*object.pTileInfo, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pQuantization == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1Quantization*", "pQuantization", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1Quantization*", "pQuantization", indents + 1);
        dump_text_StdVideoAV1Quantization(*object.pQuantization, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pSegmentation == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1Segmentation*", "pSegmentation", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1Segmentation*", "pSegmentation", indents + 1);
        dump_text_StdVideoAV1Segmentation(*object.pSegmentation, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pLoopFilter == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1LoopFilter*", "pLoopFilter", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1LoopFilter*", "pLoopFilter", indents + 1);
        dump_text_StdVideoAV1LoopFilter(*object.pLoopFilter, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pCDEF == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1CDEF*", "pCDEF", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1CDEF*", "pCDEF", indents + 1);
        dump_text_StdVideoAV1CDEF(*object.pCDEF, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pLoopRestoration == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1LoopRestoration*", "pLoopRestoration", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1LoopRestoration*", "pLoopRestoration", indents + 1);
        dump_text_StdVideoAV1LoopRestoration(*object.pLoopRestoration, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pGlobalMotion == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1GlobalMotion*", "pGlobalMotion", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1GlobalMotion*", "pGlobalMotion", indents + 1);
        dump_text_StdVideoAV1GlobalMotion(*object.pGlobalMotion, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pFilmGrain == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1FilmGrain*", "pFilmGrain", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1FilmGrain*", "pFilmGrain", indents + 1);
        dump_text_StdVideoAV1FilmGrain(*object.pFilmGrain, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}
void dump_text_StdVideoDecodeAV1ReferenceInfoFlags(const StdVideoDecodeAV1ReferenceInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "disable_frame_end_update_cdf", indents + 1);
    dump_text_uint32_t(object.disable_frame_end_update_cdf, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_enabled", indents + 1);
    dump_text_uint32_t(object.segmentation_enabled, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoDecodeAV1ReferenceInfo(const StdVideoDecodeAV1ReferenceInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoDecodeAV1ReferenceInfoFlags", "flags", indents + 1);
    dump_text_StdVideoDecodeAV1ReferenceInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "frame_type", indents + 1);
    dump_text_uint8_t(object.frame_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "RefFrameSignBias", indents + 1);
    dump_text_uint8_t(object.RefFrameSignBias, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "OrderHint", indents + 1);
    dump_text_uint8_t(object.OrderHint, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.SavedOrderHints, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, "uint8_t[STD_VIDEO_AV1_NUM_REF_FRAMES]", "uint8_t", "SavedOrderHints", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_NUM_REF_FRAMES; ++i) {
        std::stringstream stream;
        stream << "SavedOrderHints" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.SavedOrderHints[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.SavedOrderHints, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1DecoderModelInfo(const StdVideoEncodeAV1DecoderModelInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint8_t", "buffer_delay_length_minus_1", indents + 1);
    dump_text_uint8_t(object.buffer_delay_length_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "buffer_removal_time_length_minus_1", indents + 1);
    dump_text_uint8_t(object.buffer_removal_time_length_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "frame_presentation_time_length_minus_1", indents + 1);
    dump_text_uint8_t(object.frame_presentation_time_length_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "reserved1", indents + 1);
    dump_text_uint8_t(object.reserved1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "num_units_in_decoding_tick", indents + 1);
    dump_text_uint32_t(object.num_units_in_decoding_tick, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1ExtensionHeader(const StdVideoEncodeAV1ExtensionHeader& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint8_t", "temporal_id", indents + 1);
    dump_text_uint8_t(object.temporal_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "spatial_id", indents + 1);
    dump_text_uint8_t(object.spatial_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1OperatingPointInfoFlags(const StdVideoEncodeAV1OperatingPointInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "decoder_model_present_for_this_op", indents + 1);
    dump_text_uint32_t(object.decoder_model_present_for_this_op, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "low_delay_mode_flag", indents + 1);
    dump_text_uint32_t(object.low_delay_mode_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "initial_display_delay_present_for_this_op", indents + 1);
    dump_text_uint32_t(object.initial_display_delay_present_for_this_op, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 29", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1OperatingPointInfo(const StdVideoEncodeAV1OperatingPointInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeAV1OperatingPointInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeAV1OperatingPointInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "operating_point_idc", indents + 1);
    dump_text_uint16_t(object.operating_point_idc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_level_idx", indents + 1);
    dump_text_uint8_t(object.seq_level_idx, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "seq_tier", indents + 1);
    dump_text_uint8_t(object.seq_tier, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "decoder_buffer_delay", indents + 1);
    dump_text_uint32_t(object.decoder_buffer_delay, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "encoder_buffer_delay", indents + 1);
    dump_text_uint32_t(object.encoder_buffer_delay, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "initial_display_delay_minus_1", indents + 1);
    dump_text_uint8_t(object.initial_display_delay_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1PictureInfoFlags(const StdVideoEncodeAV1PictureInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "error_resilient_mode", indents + 1);
    dump_text_uint32_t(object.error_resilient_mode, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "disable_cdf_update", indents + 1);
    dump_text_uint32_t(object.disable_cdf_update, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "use_superres", indents + 1);
    dump_text_uint32_t(object.use_superres, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "render_and_frame_size_different", indents + 1);
    dump_text_uint32_t(object.render_and_frame_size_different, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_screen_content_tools", indents + 1);
    dump_text_uint32_t(object.allow_screen_content_tools, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_filter_switchable", indents + 1);
    dump_text_uint32_t(object.is_filter_switchable, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "force_integer_mv", indents + 1);
    dump_text_uint32_t(object.force_integer_mv, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_size_override_flag", indents + 1);
    dump_text_uint32_t(object.frame_size_override_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "buffer_removal_time_present_flag", indents + 1);
    dump_text_uint32_t(object.buffer_removal_time_present_flag, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_intrabc", indents + 1);
    dump_text_uint32_t(object.allow_intrabc, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "frame_refs_short_signaling", indents + 1);
    dump_text_uint32_t(object.frame_refs_short_signaling, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_high_precision_mv", indents + 1);
    dump_text_uint32_t(object.allow_high_precision_mv, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "is_motion_mode_switchable", indents + 1);
    dump_text_uint32_t(object.is_motion_mode_switchable, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "use_ref_frame_mvs", indents + 1);
    dump_text_uint32_t(object.use_ref_frame_mvs, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "disable_frame_end_update_cdf", indents + 1);
    dump_text_uint32_t(object.disable_frame_end_update_cdf, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "allow_warped_motion", indents + 1);
    dump_text_uint32_t(object.allow_warped_motion, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "reduced_tx_set", indents + 1);
    dump_text_uint32_t(object.reduced_tx_set, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "skip_mode_present", indents + 1);
    dump_text_uint32_t(object.skip_mode_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_q_present", indents + 1);
    dump_text_uint32_t(object.delta_q_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_lf_present", indents + 1);
    dump_text_uint32_t(object.delta_lf_present, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "delta_lf_multi", indents + 1);
    dump_text_uint32_t(object.delta_lf_multi, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_enabled", indents + 1);
    dump_text_uint32_t(object.segmentation_enabled, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_update_map", indents + 1);
    dump_text_uint32_t(object.segmentation_update_map, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_temporal_update", indents + 1);
    dump_text_uint32_t(object.segmentation_temporal_update, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_update_data", indents + 1);
    dump_text_uint32_t(object.segmentation_update_data, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "UsesLr", indents + 1);
    dump_text_uint32_t(object.UsesLr, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "usesChromaLr", indents + 1);
    dump_text_uint32_t(object.usesChromaLr, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "show_frame", indents + 1);
    dump_text_uint32_t(object.show_frame, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "showable_frame", indents + 1);
    dump_text_uint32_t(object.showable_frame, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 3", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1PictureInfo(const StdVideoEncodeAV1PictureInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeAV1PictureInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeAV1PictureInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1FrameType", "frame_type", indents + 1);
    dump_text_StdVideoAV1FrameType(object.frame_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "frame_presentation_time", indents + 1);
    dump_text_uint32_t(object.frame_presentation_time, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "current_frame_id", indents + 1);
    dump_text_uint32_t(object.current_frame_id, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "order_hint", indents + 1);
    dump_text_uint8_t(object.order_hint, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "primary_ref_frame", indents + 1);
    dump_text_uint8_t(object.primary_ref_frame, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "refresh_frame_flags", indents + 1);
    dump_text_uint8_t(object.refresh_frame_flags, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "coded_denom", indents + 1);
    dump_text_uint8_t(object.coded_denom, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "render_width_minus_1", indents + 1);
    dump_text_uint16_t(object.render_width_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint16_t", "render_height_minus_1", indents + 1);
    dump_text_uint16_t(object.render_height_minus_1, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1InterpolationFilter", "interpolation_filter", indents + 1);
    dump_text_StdVideoAV1InterpolationFilter(object.interpolation_filter, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1TxMode", "TxMode", indents + 1);
    dump_text_StdVideoAV1TxMode(object.TxMode, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "delta_q_res", indents + 1);
    dump_text_uint8_t(object.delta_q_res, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "delta_lf_res", indents + 1);
    dump_text_uint8_t(object.delta_lf_res, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.ref_order_hint, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, "uint8_t[STD_VIDEO_AV1_NUM_REF_FRAMES]", "uint8_t", "ref_order_hint", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_NUM_REF_FRAMES; ++i) {
        std::stringstream stream;
        stream << "ref_order_hint" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.ref_order_hint[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ref_order_hint, STD_VIDEO_AV1_NUM_REF_FRAMES, settings, indents + 1);
    dump_text_array_start(object.ref_frame_idx, STD_VIDEO_AV1_REFS_PER_FRAME, settings, "int8_t[STD_VIDEO_AV1_REFS_PER_FRAME]", "int8_t", "ref_frame_idx", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_REFS_PER_FRAME; ++i) {
        std::stringstream stream;
        stream << "ref_frame_idx" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "int8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_int8_t(object.ref_frame_idx[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.ref_frame_idx, STD_VIDEO_AV1_REFS_PER_FRAME, settings, indents + 1);
    dump_text_array_start(object.reserved1, 3, settings, "uint8_t[3]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 3; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 3, settings, indents + 1);
    dump_text_array_start(object.delta_frame_id_minus_1, STD_VIDEO_AV1_REFS_PER_FRAME, settings, "uint32_t[STD_VIDEO_AV1_REFS_PER_FRAME]", "uint32_t", "delta_frame_id_minus_1", indents + 1);
    for (size_t i = 0; i < STD_VIDEO_AV1_REFS_PER_FRAME; ++i) {
        std::stringstream stream;
        stream << "delta_frame_id_minus_1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint32_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint32_t(object.delta_frame_id_minus_1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.delta_frame_id_minus_1, STD_VIDEO_AV1_REFS_PER_FRAME, settings, indents + 1);
    if (object.pTileInfo == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1TileInfo*", "pTileInfo", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1TileInfo*", "pTileInfo", indents + 1);
        dump_text_StdVideoAV1TileInfo(*object.pTileInfo, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pQuantization == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1Quantization*", "pQuantization", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1Quantization*", "pQuantization", indents + 1);
        dump_text_StdVideoAV1Quantization(*object.pQuantization, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pSegmentation == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1Segmentation*", "pSegmentation", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1Segmentation*", "pSegmentation", indents + 1);
        dump_text_StdVideoAV1Segmentation(*object.pSegmentation, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pLoopFilter == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1LoopFilter*", "pLoopFilter", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1LoopFilter*", "pLoopFilter", indents + 1);
        dump_text_StdVideoAV1LoopFilter(*object.pLoopFilter, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pCDEF == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1CDEF*", "pCDEF", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1CDEF*", "pCDEF", indents + 1);
        dump_text_StdVideoAV1CDEF(*object.pCDEF, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pLoopRestoration == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1LoopRestoration*", "pLoopRestoration", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1LoopRestoration*", "pLoopRestoration", indents + 1);
        dump_text_StdVideoAV1LoopRestoration(*object.pLoopRestoration, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pGlobalMotion == NULL) {
        dump_text_nullptr(settings, "const StdVideoAV1GlobalMotion*", "pGlobalMotion", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoAV1GlobalMotion*", "pGlobalMotion", indents + 1);
        dump_text_StdVideoAV1GlobalMotion(*object.pGlobalMotion, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pExtensionHeader == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeAV1ExtensionHeader*", "pExtensionHeader", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeAV1ExtensionHeader*", "pExtensionHeader", indents + 1);
        dump_text_StdVideoEncodeAV1ExtensionHeader(*object.pExtensionHeader, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
    if (object.pBufferRemovalTimes == NULL) {
        dump_text_nullptr(settings, "const uint32_t*", "pBufferRemovalTimes", indents + 1);
    } else {
        dump_text_value_start(settings, "const uint32_t*", "pBufferRemovalTimes", indents + 1);
        dump_text_uint32_t(*object.pBufferRemovalTimes, settings, indents + 1);
        dump_text_value_end(settings, indents + 1);
    }
}
void dump_text_StdVideoEncodeAV1ReferenceInfoFlags(const StdVideoEncodeAV1ReferenceInfoFlags& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_value_start(settings, "uint32_t: 1", "disable_frame_end_update_cdf", indents + 1);
    dump_text_uint32_t(object.disable_frame_end_update_cdf, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 1", "segmentation_enabled", indents + 1);
    dump_text_uint32_t(object.segmentation_enabled, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t: 30", "reserved", indents + 1);
    dump_text_uint32_t(object.reserved, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
}
void dump_text_StdVideoEncodeAV1ReferenceInfo(const StdVideoEncodeAV1ReferenceInfo& object, const ApiDumpSettings& settings, int indents)
{
    dump_text_struct_summary(settings, static_cast<const void*>(&object));
    dump_text_struct_start(settings, "StdVideoEncodeAV1ReferenceInfoFlags", "flags", indents + 1);
    dump_text_StdVideoEncodeAV1ReferenceInfoFlags(object.flags, settings, indents + 1);
    dump_text_struct_end(settings, indents + 1);
    dump_text_value_start(settings, "uint32_t", "RefFrameId", indents + 1);
    dump_text_uint32_t(object.RefFrameId, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "StdVideoAV1FrameType", "frame_type", indents + 1);
    dump_text_StdVideoAV1FrameType(object.frame_type, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_value_start(settings, "uint8_t", "OrderHint", indents + 1);
    dump_text_uint8_t(object.OrderHint, settings, indents + 1);
    dump_text_value_end(settings, indents + 1);
    dump_text_array_start(object.reserved1, 3, settings, "uint8_t[3]", "uint8_t", "reserved1", indents + 1);
    for (size_t i = 0; i < 3; ++i) {
        std::stringstream stream;
        stream << "reserved1" <<"[" << i << "]";
        std::string indexName = stream.str();
        dump_text_value_start(settings, "uint8_t", indexName.c_str(), indents + 1 + 1);
        dump_text_uint8_t(object.reserved1[i], settings, indents + 1 + 1);
        dump_text_value_end(settings, indents + 1 + 1);
    }
    dump_text_array_end(object.reserved1, 3, settings, indents + 1);
    if (object.pExtensionHeader == NULL) {
        dump_text_nullptr(settings, "const StdVideoEncodeAV1ExtensionHeader*", "pExtensionHeader", indents + 1);
    } else {
        dump_text_struct_start(settings, "const StdVideoEncodeAV1ExtensionHeader*", "pExtensionHeader", indents + 1);
        dump_text_StdVideoEncodeAV1ExtensionHeader(*object.pExtensionHeader, settings, indents + 1);
        dump_text_struct_end(settings, indents + 1);
    }
}

//========================== Union Implementations ==========================//


//======================== pNext Chain Implementation =======================//


//========================== Function Helpers ===============================//


//========================= Function Implementations ========================//



