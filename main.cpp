//北航10年第二题
/*归并两个有序字符串，要求输出不能有重复字符（数据结构上做过N遍的Merge函数）*/

#include <stdio.h>
#include <string.h>
#define M 200
using namespace std;

int main()
{
    char str1[M],str2[M];
    char res[2*M];
    scanf("%s",str1);
    scanf("%s",str2);
    int l1,l2;
    l1 = strlen(str1);
    l2 = strlen(str2);

    int i=0,j=0,k=0;
    while((str1[i]!='\0')&&(str2[j]!='\0'))
    {
        if(str1[i]<str2[j])//str1[i]<str2[j]
         {
             if(str1[i]==res[k])
             i++;
            else
        {
            res[k]=str1[i];
            k++;
            i++;
        }

        }

        else if(str1[i]>str2[j])//str1[i]>str2[j]
        {
            if(str2[j]==res[k])
            j++;
            else
        {
            res[k]=str2[j];
            k++;
            j++;
        }
        }

        else//str1[i]=str2[j]
        {
            if(str1[i]==res[k])
                {
                    i++;
                    j++;
                }
            else
                {
                    res[k] = str1[i];
                    i++;
                    j++;
                    k++;
                }

        }
    }
        //如果str1先结束
        if(str1[i]=='\0')
        {
            while(str2[j]!='\0')
            {
                if(str2[j]==res[k])
                    j++;
                else
                {
                    res[k] = str2[j];
                    k++;
                    j++;
                }
            }
        }

        //如果str2先结束
        if(str2[j]=='\0')
        {
            while(str1[i]!='\0')
            {
                if(str1[i]==res[k])
                    i++;
                else
                {
                    res[k] = str1[i];
                    k++;
                    i++;
                }
            }
        }





    int p = 0;
    while(res[p]!='\0')
    {
        printf("%c",res[p]);
        p++;
    }
    printf("\n");

    return 0;
}
