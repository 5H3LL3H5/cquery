#pragma once

#include "lsp_diagnostic.h"

#include <clang-c/Index.h>
#include <optional.h>

#include <vector>

optional<lsDiagnostic> BuildAndDisposeDiagnostic(CXDiagnostic diagnostic,
                                                 const std::string& path);

// Returns the absolute path to |file|.
std::string FileName(CXFile file);

std::string ToString(CXString cx_string);

std::string ToString(CXCursorKind cursor_kind);

const char* ClangBuiltinTypeName(CXTypeKind);