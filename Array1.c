//Program to Read, Disply and Reverse the Array.

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[50];
    int end,i;
    char temp[50];
    
  //reading an array
  printf("Enter Name : %s",&arr);
  scanf("%s",&arr);
  
  //Disply the array
  printf("Orignal Given Name : %s\n",&arr);
  
  //len of the array
  printf("Lenght of Array : %d\n", strlen(arr));
  
  //Reserve of string
  end=strlen(arr);
  for (i=0;i<end;i++){
      temp[i]=arr[end-1-i];
  }
  temp[end]='\0';
  printf("Reversed: %s\n", temp);
  
}
