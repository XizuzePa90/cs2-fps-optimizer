// monitor.cpp — part of cs2-fps-optimizer.

#include "cs2fpsoptimizer/monitor.h"

#include <cstdio>

namespace cs2fpsoptimizer {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[cs2-fps-optimizer] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace cs2fpsoptimizer
