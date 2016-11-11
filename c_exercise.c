/*
 * C言語のサンプルプログラム - Webkaru
 * - 1から1000までの完全数を表示 -
 */
#include <stdio.h>

int main(void)
{

  int i, j;

  /* 和 */
  int sum;

  for( i=1; i<=1000; ++i ) {
    sum = 0;

    for( j=1; j<i; ++j) {
      if( (i % j) == 0)
        sum += j;
    }

    /* 完全数かどうかを判定 */
    if( j == sum )
      printf("%d ", j);

  }

  printf("\n");

  return 0;
}
