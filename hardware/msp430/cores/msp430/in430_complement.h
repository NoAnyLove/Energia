/*
 * in430_complement.h
 *
 *  Created on: Apr 15, 2015
 *      Author: NoAnyLove
 */

#ifndef IN430_COMPLEMENT_H_
#define IN430_COMPLEMENT_H_

/* Define _write_SR_register */
#define _write_SR_register(x) \
	__asm__ __volatile__ ("mov %0, SR" \
        : : "ri" ((unsigned int) x) \
	)

/* intrinsics.h definitions, complementing in430.h */
#define READ_SR __get_SR_register()
#define WRITE_SR(_x) __write_SR_register(_x)

/* Define alternative name for intrinsics */
#define __write_SR_register(x) _write_SR_register(x)

#endif /* IN430_COMPLEMENT_H_ */
