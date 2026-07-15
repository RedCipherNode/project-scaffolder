#pragma once

class Application
{
public:
    int run(int argc, char *argv[]);

private:
    void show_usage() const;
    void show_help() const;
    void show_version() const;

    int command_new();
    int command_list();
};