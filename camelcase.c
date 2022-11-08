#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int c=1;
    for(int i=0;i<strlen(s);i++)
        if(s[i]>='A'&&s[i]<='Z')
         c++;
        printf("%d",c);
    return 0;
}
