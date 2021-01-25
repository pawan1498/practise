#include <stdio.h>
int lucky(int n, int i)
{
    // base condition
    if (i > 1)
    {
        if (n < i)
            return 1;
        if (n % i == 0)
            return 0;
    }

    return lucky((n - n / i), ++i); //recursive condition
}
int main()
{
    int n = 15;
    printf("%d", lucky(n, 2));

}
// 0 is for not lucky .
// 1 is for lucky nuber.