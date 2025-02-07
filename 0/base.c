#include<stdio.h>
int judge(int n);
int main()
{
  //写在for循环括号里，否则下次外层循环时  b  会从上次结束的值开始，而不是从2开始，可能导致遗漏一些情况
  for (int a = 4;a<=2000; a += 2)
  {
    for (int b = 2;b<a; b++)
    {
      if (judge(b) && judge(a-b))
      {
        printf("b=%d,a-b=%d\n", b, a-b);
        break;
      }
    }

  }
  return 0;
}
int judge(int n)
{
  if (n <= 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}