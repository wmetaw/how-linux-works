#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
  for (;;) {
    getppid();
  }
}

/*
[root@58d4119d0436 src]# sar -P ALL 1 1

・CPU1上では、ppidloopプログラムを24%の割合で実行していた
・pploopプログラムの依頼に対応して、このプログラムの親プロセスを取得するカーネルの処理を76%の割合で実行していた



Linux 4.9.87-linuxkit-aufs (58d4119d0436) 	05/27/18 	_x86_64_	(2 CPU)

04:40:17        CPU     %user     %nice   %system   %iowait    %steal     %idle
04:40:18        all     12.44      0.00     37.81      0.00      0.00     49.75
04:40:18          0      0.99      0.00      0.00      0.00      0.00     99.01
04:40:18          1     24.00      0.00     76.00      0.00      0.00      0.00

Average:        CPU     %user     %nice   %system   %iowait    %steal     %idle
Average:        all     12.44      0.00     37.81      0.00      0.00     49.75
Average:          0      0.99      0.00      0.00      0.00      0.00     99.01
Average:          1     24.00      0.00     76.00      0.00      0.00      0.00
*/
