class Solution {
    public int reverse(int x) {
      int t=x;long reversed=0;
            while (t != 0) {
            int digit = t % 10;
            reversed = reversed * 10 + digit;
            t /= 10;
            }
            if (reversed > Integer.MAX_VALUE || reversed < Integer.MIN_VALUE){
            return 0;}
            else
            return (int)reversed;
    }
}
        