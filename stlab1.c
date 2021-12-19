#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the input array = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements ::: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int h[11];
    for (int i = 0; i < 11; i++)
    {
        h[i] = 0;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        h[arr[i]]++;
    }

    for (int i = 1; i < 11; i++)
    {
        if (h[i] > 2)
        {
            cnt++;
        }
        else
        {
            cnt += h[i];
        }
    }
    int ans[cnt];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[arr[i]] != 0)
        {
            ans[k] = arr[i];
            k++;
            if (h[arr[i]] > 2)
            {
                h[arr[i]] = 0;
            }
            else
            {
                h[arr[i]]--;
            }
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d\t", ans[i]);
    }
    return 0;
}