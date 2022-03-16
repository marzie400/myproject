#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
char set_output(char* str){
int i=0;
 int number_success=0;
if (str){
              
             printf("word is %s success\n",str);
      }         
   }
char main(){
   FILE *fp;
   char str;
   char temp[100000];
  
    while ((fp = fopen("test.txt","r")) != NULL) {
          if (fp){
		printf("oh! test.txt found!\n");
	 }
      (fgets(temp,100000,fp) != NULL);
            printf("What word are you looking for? please write:\n");
            scanf("%s",&str);
            printf("OK. I'm getting to work now ...\n");
            if ((strstr(temp,&str)) == NULL) {
                   printf("sorry! not found\n");
                                    }
             else {
                     
                   set_output(&str);

                   }
                                             
//fclose(fp);

               printf("test.txt removed!\n");
               printf("Now I'm waiting for test.txt again...\n");                           
  }
}
