#include <stdio.h>

int main(void) {
  puts("hello world");
  return 0;
}

/**
$ cat hello.log

brk( NULL) = 0 x 917000
access("/ etc/ ld. so. nohwcap", F_ OK) = -1
ENOENT (No such file or directory)
mmap( NULL, 8192, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0) = 0x7f3ff46c2000
access("/ etc/ ld. so. preload", R_OK) = -1
ENOENT (No such file or directory)
...

brk(NULL) = 0x917000
brk(0x938000) = 0x938000
write(1, "hello world\n", 12) = 12 ←①
exit_group( 0) = ?
+++ exited with 0 +++

**/
