bool checkDivisibility(int n) {
    int n2=n,s=0,r,p=1;
    while(n2>0){
        r=n2%10;
        s+=r;
        p*=r;
        n2/=10;
    }
    if(n%(s+p)==0)
    return true;
    return false;
}