#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

void usage(const char *use) {
  printf ("Usage: doppler <command>");
}


struct input_help {
  const char *opt_name;
  int arg;
  int value;
  const char *contents;
};

typedef enum {
  version_input = 'v',
  help_input = 'h'
};

struct input_help help[] = {
  { "version", no_argument, version_input, "The version of Doppler you're running" },
  { "help", no_argument, help_input, "Display the help section (you're already here!)" },
};

int main(int argc, char **argv) {
  struct doppler_conf;
  struct options *getopt_options = NULL;

  return 0;
}
