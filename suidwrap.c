#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

static const char *program = "/usr/local/bin/multitraceroute";

int
main(int argc, char **argv)
{
  char *envp[] = {
    NULL
  };
  execve(program, argv, envp);
  fprintf(stderr, "execve() failed: %s\n", strerror(errno));
  return 1;
}
