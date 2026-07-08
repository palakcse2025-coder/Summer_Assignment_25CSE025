//Q-81

#include <stdio.h>

int main(){
    char str[100];
    int i=0;

    printf("Enter a strings: ");
    gets(str);

    //Count characters
    while(str[i]!='\0')
      i++;

    printf("Length = %d",i);
    
    return 0;
}

//Q-82

#include<stdio.H>
 int main(){
    char str[100];
    int i,length=0;

    printf("Enter a string: ");
    gets(str);
    
    //Find length
    while(str[length]!='\0')
      length++;

    printf("Reversed string: ");
    
    //Print from last character
    for(i=length-1;i>=)
 }

 //Q-83

 #include <stdio.h>
 int mainn(){
 char str[100];
 int i,vowels=0,consonants=0;

 printf("Enter a string; ");
 gets(str);

 for(i=0;str[i]!='\0';i++){

  if((str[i]=='A'||str[i]=='Z') || (str[i]>='a' && str[i]<='z')) {
    
     if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
       str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowels++;
     else
         consonants++;
     }        
    }    
    
    printf("vowels = %d\n",vowels);
    printf("Consonants = %d",consonants);

    return 0;

  }

//Q-84

#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("enter a string: ");
  gets(str);

  //Convert lowercase letters to uppercase
  for(i=0;str[i]!='\0';i++){

    if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
  }

  printf("Uppercase string = %s",str);

  return 0;
}