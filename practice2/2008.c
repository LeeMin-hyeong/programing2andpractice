#include<stdio.h>
int main(void){
	FILE *ifp = fopen("text.txt", "r");
	fseek(ifp, 0, SEEK_END);
    
	if(ftell(ifp)==0)
        return 0;

	fseek(ifp, -1, SEEK_CUR);
	for(int i=0; i<5; i++){
		int c = getc(ifp);
		putchar(c);

		if(ftell(ifp)==1)
            break;
		fseek(ifp, -1, SEEK_CUR);
	}
	fclose(ifp);
	return 0;
}
