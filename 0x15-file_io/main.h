#ifndef FILE_IO
#define FILE_IO
#include <sys/types.h>
#include <sys/stat.h>
#include <fentl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif
