#pragma once

#include "llvm/IR/PassManager.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopAnalysisManager.h"

namespace llvm 
{
    class ErmolaevLoopAnalysisInfo 
    {
    public:
        int64_t updates = 0;
    };

    class ErmolaevLoopAnalysis : public AnalysisInfoMixin<ErmolaevLoopAnalysis> 
    {
    public:
        static AnalysisKey Key;
        using Result = ErmolaevLoopAnalysisInfo;

        Result run(Loop& L, LoopAnalysisManager& LAM, LoopStandardAnalysisResults& LSAR);
        static StringRef name() { return "ErmolaevLoopAnalysis"; }
    };
} 