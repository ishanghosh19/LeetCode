class Solution {
    public boolean isPalindrome(int x) {
        int t=x,r=0,s=0,i;
        boolean flag;
        int c = (int) (Math.log10(x) + 1);
        for(i=0;i<c;i++){
            r=x%10;
            s=s*10+r;
            x/=10;
        }
        if(s==t)
        flag=true;
        else 
        flag=false;
        return flag;
    }
}