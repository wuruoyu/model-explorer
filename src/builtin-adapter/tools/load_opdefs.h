#ifndef TENSORFLOW_COMPILER_MLIR_LITE_EXPERIMENTAL_GOOGLE_TOOLING_TOOLS_LOAD_OPDEFS_H_
#define TENSORFLOW_COMPILER_MLIR_LITE_EXPERIMENTAL_GOOGLE_TOOLING_TOOLS_LOAD_OPDEFS_H_

#include <string>
#include <utility>
#include <vector>

#include "absl/container/flat_hash_map.h"

namespace tooling {
namespace visualization_client {

struct OpMetadata {
  std::vector<std::string> arguments;
  std::vector<std::string> results;

  // Move Constructor
  OpMetadata(std::vector<std::string>&& arguments,
             std::vector<std::string>&& results)
      : arguments(std::move(arguments)), results(std::move(results)) {}
};

absl::flat_hash_map<std::string, OpMetadata> LoadTfliteOpdefs();

}  // namespace visualization_client
}  // namespace tooling

#endif  // TENSORFLOW_COMPILER_MLIR_LITE_EXPERIMENTAL_GOOGLE_TOOLING_TOOLS_LOAD_OPDEFS_H_
