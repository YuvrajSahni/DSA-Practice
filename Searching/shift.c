#include <stdio.h>
int main()
{
    char Text[100];
    int n;
    int shift;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    scanf("%s", Text);
    printf("Enter shift: ");
    scanf("%d", &shift);
    char temp;
    for (int i = 0; i < n; i++)
    {
        temp = Text[i] - 'A';
        temp += shift;
        temp = temp % 26;
        Text[i] = temp + 'A';
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c ", Text[i]);
    }
}