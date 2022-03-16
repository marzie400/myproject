#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
char set_output(char* str){
int i=0;
 int number_success=0;
if (str){
              
           // number_success=number_success+1;
      // printf("%d success number: ",number_success);
       printf("word is %s success\n",str);

      }         
   }
char main(){
  FILE *fp;
  //int i=0;
  char str;
   //memset(str,0,1000 + 1);
  char temp[100000];
  
    while ((fp = fopen("test.txt","r")) != NULL) {
          if (fp){
		printf("oh! test.txt found!\n");
	 }//else {return 0;}
      (fgets(temp,100000,fp) != NULL);
            printf("What word are you looking for? please write:\n");
            scanf("%s",&str);
            printf("OK. I'm getting to work now ...\n");
            if ((strstr(temp,&str)) == NULL) {
                   printf("sorry! not found\n");
                   //return 0;
                      }
             else {
                     
                   set_output(&str);

                   }
                                             
//fclose(fp);

               printf("test.txt removed!\n");
               printf("Now I'm waiting for test.txt again...\n");                           
  }
}
