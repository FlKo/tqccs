#include "logger.h"
#include <spdlog/spdlog.h>
#include <iostream>

void initLogger() {
    try {
        spdlog::set_level(spdlog::level::info);
        spdlog::info("Logger initialized!");
    } catch (const spdlog::spdlog_ex &ex) {
        std::cerr << "Log initialization failed: " << ex.what() << std::endl;
    }
}