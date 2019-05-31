/* 計算機概論實務-進階練習作業-作業14 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫 
#include <ctype.h>  //函示庫
#include <string.h> //函示庫

int main(void)
{
	printf("計算機概論實務-進階練習作業-作業14\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:00\n");
	printf("-----------------------------------\n");
    char str[]="I $am 5a$ go68od#@$ st-ude[nt]."; //字串str[]
    char newstr[50];
    
    int i, j=0; 
    int length=strlen(str);//做幾個字母的次數 
    
    for (i=0; i<length; i++)//做幾個字母的次數 
    {
         if (isalpha(str[i]) !=0 || isspace(str[i]) !=0) //判別是否為字母 
		 {
		 	 newstr[j]=str[i];
		 	 j++;
	     }
    }
    newstr[j]='\0'; //最後一位填入結束字元 
    puts(newstr);
    system("pause");//暫停視窗 
    return 0;//回傳值 0 
}
