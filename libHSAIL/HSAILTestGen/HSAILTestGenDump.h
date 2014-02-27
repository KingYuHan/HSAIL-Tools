//===-- HSAILTestGenDump.h - HSAIL Test Generator - Dump of Instructions ===//
//
//===----------------------------------------------------------------------===//
//
// (C) 2013 AMD Inc. All rights reserved.
//
//===----------------------------------------------------------------------===//

#ifndef INCLUDED_HSAIL_TESTGEN_DUMP_H
#define INCLUDED_HSAIL_TESTGEN_DUMP_H

#include "HSAILItems.h"

using HSAIL_ASM::Inst;

namespace TESTGEN {

//==============================================================================
//==============================================================================
//==============================================================================

void dumpInst(Inst inst);

//==============================================================================
//==============================================================================
//==============================================================================

}; // namespace TESTGEN 

#endif // INCLUDED_HSAIL_TESTGEN_DUMP_H