#include <fmt/core.h>
#include <spdlog/spdlog.h>
#include "logger.h"

int main() {
    initLogger();

    fmt::print("Hello, world! From fmt library!\n");
    spdlog::info("This is a log message using spdlog");

    return 0;
}