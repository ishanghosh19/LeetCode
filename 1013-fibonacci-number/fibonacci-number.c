

int fib(int n){
    if(n==0){
        return 0;
    }
    int a=0, b=1,c;
    for(int i=0;i<n-1;i++){
    c=a+b;
    a=b;
    b=c;
    }
    return c;
}