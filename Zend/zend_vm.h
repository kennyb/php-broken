/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2008 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Dmitry Stogov <dmitry@zend.com>                             |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_vm.h,v 1.7.2.1.2.3 2007/12/31 07:20:03 sebastian Exp $ */

#ifndef ZEND_VM_H
#define ZEND_VM_H

ZEND_API void zend_vm_use_old_executor(void);
ZEND_API void zend_vm_set_opcode_handler(zend_op* opcode);
ZEND_API int zend_is_valid_opcode(zend_uchar opcode, int op1_type, int op2_type);

#define ZEND_VM_SET_OPCODE_HANDLER(opline) zend_vm_set_opcode_handler(opline)

#endif
