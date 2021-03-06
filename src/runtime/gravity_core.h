//
//  gravity_core.h
//  gravity
//
//  Created by Marco Bambini on 10/01/15.
//  Copyright (c) 2015 CreoLabs. All rights reserved.
//

#ifndef __GRAVITY_CORE__
#define __GRAVITY_CORE__

#include "gravity_vm.h"

// core functions
void gravity_core_register (gravity_vm *vm);
bool gravity_iscore_class (gravity_class_t *c);
void gravity_core_free (void);
uint32_t gravity_core_identifiers (const char ***id);

// conversion functions
gravity_value_t convert_value2int (gravity_vm *vm, gravity_value_t v);
gravity_value_t convert_value2float (gravity_vm *vm, gravity_value_t v);
gravity_value_t convert_value2bool (gravity_vm *vm, gravity_value_t v);
gravity_value_t convert_value2string (gravity_vm *vm, gravity_value_t v);

#endif
