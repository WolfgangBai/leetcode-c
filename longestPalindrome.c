char *longestPalindrome(char *s)
{
    unsigned long len;
    int count;
    int start,end;
    int l,r;
    int max;
    
    
    len = strlen(s);
    if (len < 2) return s;
    start = 0;
    end = 0;
    max = 0;
    l = 0;
    r = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                count = j - i + 1;
                if (count % 2 != 0) {
                    start = count / 2;
                    end = start;
                } else {
                    start = count / 2 - 1;
                    end = start + 1;
                    
                }
                while (start > i && end < j && s[start] == s[end]) {
                    start--;
                    end++;
                    
                }
                if (s[start] != s[end]) {
                    break;
                }else {
                    if (end - start + 1 > max) {
                        max = end - start + 1;
                        l = start;
                        r = end;
                    }
                }
            } else {
                continue;
            }

    
        }
    }
    s[r+1] = '\0';
    
    return s+l;
    
    
}