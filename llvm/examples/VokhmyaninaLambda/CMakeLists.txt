set(LLVM_LINK_COMPONENTS
  Core
  ExecutionEngine
  Interpreter
  MC
  MCJIT
  Support
  nativecodegen
  )

add_llvm_example(VokhmyaninaLambda
  VokhmyaninaAst.hpp
  VokhmyaninaAst.cpp
  VokhmyaninaLexer.hpp
  VokhmyaninaLexer.cpp
  VokhmyaninaParser.hpp
  VokhmyaninaParser.cpp
  VokhmyaninaLambda.cpp
  )
