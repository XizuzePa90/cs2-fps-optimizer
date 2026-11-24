// configs.cpp — part of cs2-fps-optimizer.

#include "cs2fpsoptimizer/configs.h"

#include <cstdio>

namespace cs2fpsoptimizer {

Configs::Configs(const std::string& config_path)
    : config_path_(config_path) {}

void Configs::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Configs::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-fps-optimizer] configs: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2fpsoptimizer
