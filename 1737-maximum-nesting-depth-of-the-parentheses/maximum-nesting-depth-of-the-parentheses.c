#include <math.h>
int maxDepth(char* s) {
    int maxi=0,c=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('){
            c++;
            maxi=fmax(c,maxi);
        }
        if(s[i]==')'){
            c--;
        }
    }
    return maxi;
}