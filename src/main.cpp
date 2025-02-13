#include <CLI/CLI.hpp>
#include <fmt/core.h>
#include <spdlog/spdlog.h>
#include "logger.h"

int main(int argc, char **argv) {
    initLogger();

    CLI::App app{"MyCppProject - A simple CLI tool"};

    std::string name = "World";
    app.add_option("-n,--name", name, "Name to greet");

    CLI11_PARSE(app, argc, argv);

    fmt::print("Hello, {}!\n", name);
    spdlog::info("User provided name: {}", name);

    return 0;
}
