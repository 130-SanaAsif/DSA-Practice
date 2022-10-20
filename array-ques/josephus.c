#include <stdio.h>
int Josephus(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (Josephus(n - 1, k) + k) % n;
}
int main()
{
    int n, k = 3;
    printf("Enter the number of people: \n");
    scanf("%d", &n);

    int res = Josephus(n, k);
    printf("The winner is person no. %d", res);

    return 0;
}