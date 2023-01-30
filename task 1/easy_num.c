#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS // для scanf

void print_mas(int mas[]){
    int len_mas;
    len_mas = sizeof(mas) - sizeof(int);
    for (int i=0; i <= len_mas; i++){
      printf("%i", mas[i]);
    }
}


int main(){
  int num;
  int answer[num];
  scanf("%i", &num);
  for (int i=2; i<=num; i++){
    if ((num % i) == 0){
    //  num = num / i;
      //answer[i] = i;
    }

  }
  printf("%d", num);

}
