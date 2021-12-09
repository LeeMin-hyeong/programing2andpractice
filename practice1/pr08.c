#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

typedef struct name { 
    char *str; 
} name; 

int compare (const void *p, const void *q) { 
    return strcmp(((name *)p)->str, ((name *)q)->str); 
} 

int main () { 
    name stu[6] = {"hi", "hello", "my", "name", "is", "kim"}; 
    qsort(stu, 6, sizeof(name), compare ); 
    for (int i = 0; i < 6; i++) { 
        printf("%s\n", stu[i].str); 
    } 
    return 0; 
} 
