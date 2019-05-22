/*************************************************
 ** Copyright(c) 2019, luzeya
 ** All rights reserved
 **
 ** 文件名：Log.h
 ** 创建人：zeya
 ** 创建日期： 2019-05-22
 **
 ** 描  述：日志模块
 **************************************************/
#ifndef LOG_H
#define LOG_H

#include <cstdio>

#define DBG(fmt, args...)                                       \
    fprintf(stderr, "[%s:%d] " fmt, __FILE__, __LINE__, ##args)

#define LOG(fmt, args..) fprintf(stdout, fmt, ##args)

#endif /* LOG_H */

