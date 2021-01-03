#include <stdio.h>
int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key)
            {
                return mid2;
            }
        if (key < ar[mid1]) {
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
    return -1;
}
int main()
{
    int l, r, p,i, key;
    char ar[10];
    for(i=0;i<=10;i++)
        ar[i]= scanf("%s",&ar[i]);
    l = 0;
    r = 9;
    key = scanf("%d",&key);
    p = ternarySearch(l, r, key, ar);
    printf("Index of %d is %d", key, p);
}
