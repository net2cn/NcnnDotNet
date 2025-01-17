#ifndef _CPP_MAT_VKMAT_H_
#define _CPP_MAT_VKMAT_H_

#include "../export.h"
#include <mat.h>
#include "../shared.h"

#if NCNN_VULKAN

DLLEXPORT int mat_VkMat_new(ncnn::VkMat** returnValue)
{
    int32_t error = ERR_OK;

    *returnValue = new ncnn::VkMat();

    return error;
}

DLLEXPORT void mat_VkMat_delete(ncnn::VkMat* vkmat)
{
    if (vkmat != nullptr) delete vkmat;
}

DLLEXPORT ncnn::VkAllocator* mat_VkMat_get_allocator(ncnn::VkMat* vkmat)
{
    return vkmat->allocator;
}

DLLEXPORT int32_t mat_VkMat_create_like_mat(ncnn::VkMat* vkmat,
                                            ncnn::Mat* mat,
                                            ncnn::VkAllocator* allocator)
{
    int32_t error = ERR_OK;

    const auto& m = *mat;
    vkmat->create_like(m, allocator);

    return error;
}

DLLEXPORT int32_t mat_VkMat_create_like_vkmat(ncnn::VkMat* vkmat,
                                              ncnn::VkMat* mat,
                                              ncnn::VkAllocator* allocator)
{
    int32_t error = ERR_OK;

    const auto& m = *mat;
    vkmat->create_like(m, allocator);

    return error;
}

#endif

#endif