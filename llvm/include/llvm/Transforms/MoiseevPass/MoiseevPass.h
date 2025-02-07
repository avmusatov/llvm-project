#pragma once

#include "llvm/IR/PassManager.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/Analysis/LoopInfo.h"


namespace llvm {
    class MoiseevPass : public PassInfoMixin<MoiseevPass> {
        public:
            PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
            static bool isRequired() {return true;}
    };
}