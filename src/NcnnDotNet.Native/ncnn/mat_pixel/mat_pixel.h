#ifndef _CPP_MAT_PIXEL_MAT_PIXEL_H_
#define _CPP_MAT_PIXEL_MAT_PIXEL_H_

#include "../export.h"
#include <mat.h>
#include "../shared.h"

#endif

DLLEXPORT int32_t mat_Mat_to_pixels(ncnn::Mat* mat,
                                    unsigned char* pixels,
                                    int type)
{
    int32_t error = ERR_OK;

    mat->to_pixels(pixels, type);

    return error;
}

DLLEXPORT int32_t mat_Mat_to_pixels2(ncnn::Mat* mat,
                                     unsigned char* pixels,
                                     int type,
                                     int stride)
{
    int32_t error = ERR_OK;

    mat->to_pixels(pixels, type, stride);

    return error;
}