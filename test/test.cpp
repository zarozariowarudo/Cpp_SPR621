#include <iostream>
using namespace std;

int strStr(char* haystack, char* needle) {
    int ocInx = 1;
    int fInx = -1;

    for (int i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0] && fInx == -1)
        {
            fInx = i;
        }
        else
        {
            if (haystack[i] == needle[ocInx])
            {
                ocInx++;
            }
            else
                return -1;
        }
    }

    return fInx;
}

int main()
{
    char str1[] = "hello";
    char str2[] = "ll";

    strStr(str1, str2);
	return 0;
}