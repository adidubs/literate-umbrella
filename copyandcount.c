#include<stdio.h>
int main()
{
    /* code */

    FILE *fp1 ,*p1,*p2;
    char ch ;
    p1 = fopen ("a.txt","r");
    p2 = fopen("b.txt","w");
    if(p1 ==NULL){
        printf("File does not exit");
    }
    else{
        while ((fscanf(p1,"%c",&ch))!=EOF)
        {
            fprintf(p2,"%c",ch);
        }
    }
    fclose(p1);
    fclose(p2);
    int count = 0;
    fp1 = fopen("a.txt","r");
    if(fp1 == NULL){
        printf("File does not exit");
    }
    else
    {
        while ((fscanf(fp1,"%c",&ch))!=EOF)
    {
    count++;
    }
    printf("%d",count);
    }
    fclose(fp1);
    fclose(p1);
    fclose(p2);
}
