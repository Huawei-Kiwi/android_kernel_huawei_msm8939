/*************************************************
Copyright . Huawei Technologies Co., Ltd. 1998-2014. All rights reserved.
File name:  hw_camera_common.c
Author:     yanhuiwen
ID��        00283550
Version:    Initial Draft
Date:       2014/07/26
Description: The camera common used macros and functions
Others: none
History:

*************************************************/
#include <linux/moduleparam.h>
#include <linux/hw_camera_common.h>
#include <linux/stat.h>

unsigned int hw_cmr_log_mask = HW_CMR_LOG_ERR|HW_CMR_LOG_WARN;

module_param_named(hw_camera_log_mask, hw_cmr_log_mask, uint, S_IRUGO|S_IWUSR);

