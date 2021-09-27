/*******************************************************************************
 * PES Assingment 3
 * File Name: LOG.h
 * Author: Howdy Pierce
 *********************************************************************************/

/*
 * log.h - abstraction away from printf
 */

#ifndef LOG_H_
#define LOG_H_

#include <stdio.h>

#ifdef DEBUG
#  define LOG printf
#else
#  define LOG(...)
#endif

#endif /* LOG_H_ */
