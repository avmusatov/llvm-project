add_llvm_component_library(LLVMKatyaMalyshevaLab2Pass
KatyaMalyshevaLab2Pass.cpp

DEPENDS 
intrinsics_gen

LINK_COMPONENTS
Core
Support
)