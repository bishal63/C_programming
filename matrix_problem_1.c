#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int number[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        printf("%d ",number[i][2]);
    }
}