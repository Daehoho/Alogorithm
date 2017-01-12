#include <cstdio>
#include <cstring>
using namespace std;

char str[1000002];
char bomb[38];

int main()
{
    int stk_p = 0, b_len;
    scanf("%s", str);
    scanf("%s", bomb);
    b_len = strlen(bomb);
    for (int i = 0; str[i] != 0; ++i)
    {
        str[stk_p++] = str[i];
        if (stk_p >= b_len)
        {
            bool isBomb = true;
            for (int k = 0; k < b_len; ++k)
                if (bomb[k] != str[stk_p - b_len + k])
                {
                    isBomb = false;
                    break;
                }
            if (isBomb)
                stk_p -= b_len;
        }
    }
    str[stk_p] = 0;
    if (stk_p == 0)
        printf("FRULA\n");
    else
        printf("%s\n", str);
}

