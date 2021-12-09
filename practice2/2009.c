#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp = fopen("test.txt","r");
	char *str=malloc(sizeof(char)*100);

	for(int i=0; i<2; i++){
		fscanf(fp, "%[^\n]" , str);
		printf("%s\n", str);
		//getc(fp);
	}
	fclose(fp);
	return 0;
}
