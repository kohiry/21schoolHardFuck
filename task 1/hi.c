#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS // для scanf

//https://learnc.info/c/formatted_input_output.html?ysclid=ld4o8lezn0720931708

void print(int text){
  char str[12];
  sprintf(str, "%i", text);
  printf("%s\n", str);
}


int main(){
  int one, two, three;
  int n;
  scanf("%d", &n);
  //printf(str);
  one = 1;
  two = 1;
  printf("1\n");
  //transform_to_str(one);
  for (int i=1; i <= n - 2; i++){
    three = two + 0;
    print(three);
    two = one + two  + 0;
    one = three + 0;
 }

  return 0;
}
