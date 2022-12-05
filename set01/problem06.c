#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main(){
  int a, b, c, largest;
  printf("Enter three no's : ");
  a = input();
  b = input();
  c = input();
  compare(a, b, c, &largest);
  output(a, b, c, largest);
}
int input(){
  int a;
  scanf("%d", &a);
  return a;
}
void compare(int a, int b, int c, int *largest){
  if (a > b && a > c){
   *largest = a;
  }
  else if (b > a && b > c){
    *largest = b;
  }
  else if (c > a && c > b){
    *largest = c;
  }
  else {
    printf("invalid input");
  }
}
void output(int a, int b, int c, int largest){
 
    printf("The largest of %d, %d and %d is %d\n", a, b, c, largest);
  }