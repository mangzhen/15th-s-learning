#include<stdio.h>

int main()
{
  //还是关于运算符顺序
  /*也就考试会用到罢了
  解题关键：
  从左边的第一个问号开始往后找冒号
  如果过程中，遇到了其他问号，那么找到的冒号序号加一
  */
  int w = 4, x =3, y =2, z = 1;
  
  int number = w < x ? w : z < y ? z : x;
  //即w < x ? (w) : (z < y ? z : x);
  printf("number = %d\n",number);
  
  int a = 3, b =2, c = 1;
  int max = a > b ? a > c ? a : c : b > c ? b : c;
  //a > b ? (a > c ? a : c) : (b > c ? b : c);
  printf("max = %d\n",max);

  int x1 = 10, y1 = 20, z1 = 30, h1 = 40, w1 = 50;
  //注意变量不可redefinition!
  int number1 = x1 > h1 ? z1 > w1 ? x1 > z1 ? x1 > y1 ? x1 : y1 : z1 : w1 : w1 > h1 ? w1 : h1;
  //还挺复杂！x1 > h1 ? (z1 > w1 ? (x1 > z1 ? (x1 > y1 ? x1 : y1) : z1) : w1) : (w1 > h1 ? w1 : h1);

  printf("number1 = %d\n",number1);
  /*
  之前知识的一些补充：
  运算符优先级 （先计算后判断！）(*) > (+) > (<=) > (!=) > (||)
  先大小于等等，再不等
  a && b,这也行？还真行！两边成立，输出1
  */
  return 0;
}
