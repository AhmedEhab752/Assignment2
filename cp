#include <stdio.h>

int main(int argc,char* argv[])

{
        char c;
        FILE *fp1, *fp2;
        fp1 = fopen(argv[1],"r");
        fp2 = fopen(argv[2],"w");

        if(argc != 3 )
        {
                printf("cp: target '%s' is not a directory\n",argv[3]);
                return 0;
        }

        while((c = fgetc(fp1)) != EOF)
        {
                fputc(c,fp2);
        }

        fclose(fp1);
        fclose(fp2);
        return 0;
}
