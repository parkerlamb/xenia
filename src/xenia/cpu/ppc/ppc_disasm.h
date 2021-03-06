/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_CPU_PPC_PPC_DISASM_H_
#define XENIA_CPU_PPC_PPC_DISASM_H_

#include "xenia/base/string_buffer.h"
#include "xenia/cpu/ppc/ppc_instr.h"

namespace xe {
namespace cpu {
namespace ppc {

int DisasmPPC(InstrData* i, StringBuffer* str);

}  // namespace ppc
}  // namespace cpu
}  // namespace xe

#endif  // XENIA_CPU_PPC_PPC_DISASM_H_
