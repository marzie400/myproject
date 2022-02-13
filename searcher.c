#include<stdio.h>
#include<string.h>
#include<stdlib.h>




  int i=0;
char set_output(char str[i]){
           printf("*******word is %s success\n",&str[i]);
                 }
char main(){
  FILE *fp;
  int i=0;
  char str[i];
  char temp[100000];

    while ((fp = fopen("test.txt", "r")) != NULL) {
    
      if (fp){
		printf("oh! test.txt found!\n");
	}
                (fgets(temp, 1000, fp) != NULL) ;
         
            printf("What word are you looking for? please write:\n");
            scanf("%s",&str[i]);
            printf("OK. I'm getting to work now ...\n");
            if ((strstr(temp, &str[i])) == NULL) {
                        printf("sorry! not found\n");
                      }
                       else {
                      set_output(&str[i]);
                        //fp = freopen("test.txt", "w+", stdout);
                             }
                         fclose(fp);

               printf("test.txt removed!\n");
               printf("Now I'm waiting for test.txt again...\n");                           
  }
}
