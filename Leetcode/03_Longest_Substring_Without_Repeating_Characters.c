#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int l = 0, longest = 0;
    int set[256] = {0};   // ASCII characters

    for (int r = 0; s[r] != '\0'; r++) {

        while (set[(unsigned char)s[r]] == 1) {
            set[(unsigned char)s[l]] = 0;
            l++;
        }

        set[(unsigned char)s[r]] = 1;

        int window = r - l + 1;
        if (window > longest)
            longest = window;
    }

    return longest;
}
