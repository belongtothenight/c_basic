#ifndef CONFIG_H
#define CONFIG_H

//https://stackoverflow.com/questions/142508/how-do-i-check-os-with-a-preprocessor-directive
#ifdef _WIN64
#define OS_WIN
#endif

#ifdef __linux__
#define OS_LINUX
#endif

#endif
