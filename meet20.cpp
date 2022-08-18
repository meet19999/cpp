#include <stdio.h>
int pos = 0, a[10], i;
//void from insert(int n)
//{
//}
void lastinsert(int n)
{
    a[pos++] = n;
}
void print()
{
    for (i = 0; i < pos; i++)
    {
        printf("\n\t%d", a[i]);
    }
}
int main()
{
    int n;
    lastinsert(11);
    lastinsert(12);
    lastinsert(13);
    lastinsert(14);
    print();
}