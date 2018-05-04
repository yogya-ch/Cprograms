//Hex dump a file

#include <stdio.h>

int main(int argc,char** argv){
    FILE *fp;                               //Pointer to file
    if(argc<2){
        printf("Usage: hd filename\n");     //Error handling for command line arguments
        return -1;
    }
    fp = fopen(argv[1],"r");                //opens the given file in command line in read mode
    char c;
    int count=0;
    if(fp==NULL){                           //Error handling for file
        printf("File %s not found", argv[1]);
    }
    else{
        while((c=fgetc(fp))!=EOF){
            if((count%8)==0){               //to print 8 bits per line (to look presentable)
                printf("\n%04d\t",count);   //offset
            }
            printf("%02x\t",c);             //prints the char in hexadecimal
            count++;
        }
        fclose(fp);
    }
    printf("\n");
}
