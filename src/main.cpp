// main.cpp — entry point. Wires config and subsystems together.

#include "cs2fpsoptimizer/settings.h"
#include "cs2fpsoptimizer/configs.h"
#include "cs2fpsoptimizer/tuner.h"
#include "cs2fpsoptimizer/monitor.h"
#include "cs2fpsoptimizer/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cs2fpsoptimizer::Settings settings = cs2fpsoptimizer::Settings::load_default();
    cs2fpsoptimizer::Configs configs(settings.store_path);
    cs2fpsoptimizer::Tuner tuner(settings.store_path);
    cs2fpsoptimizer::Monitor monitor(settings.store_path);
    cs2fpsoptimizer::Cli cli(settings.store_path);
    std::fprintf(stderr, "[cs2-fps-optimizer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
