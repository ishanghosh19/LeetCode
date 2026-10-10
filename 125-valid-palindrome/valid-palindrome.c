bool isPalindrome(char* s) {
    if (s == NULL) return true;
    
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        } else if (!isalnum(s[right])) {
            right--;
        } else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
    }
    
    return true;
}