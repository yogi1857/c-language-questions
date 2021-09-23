// program to write whether a person is eligible for voting....

#include <stdio.h>

int main()
{
  float age;
  printf("the age of person is ");
  scanf("%f",&age);
  if(age>=18){
      printf("eligible for voting");
  } 
  else{
      printf("not eligible for voting ");
  }
  

    return 0;
}
