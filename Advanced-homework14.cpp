/* �p������׹��-�i���m�ߧ@�~-�@�~14 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw 
#include <ctype.h>  //��ܮw
#include <string.h> //��ܮw

int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~14\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:00\n");
	printf("-----------------------------------\n");
    char str[]="I $am 5a$ go68od#@$ st-ude[nt]."; //�r��str[]
    char newstr[50];
    
    int i, j=0; 
    int length=strlen(str);//���X�Ӧr�������� 
    
    for (i=0; i<length; i++)//���X�Ӧr�������� 
    {
         if (isalpha(str[i]) !=0 || isspace(str[i]) !=0) //�P�O�O�_���r�� 
		 {
		 	 newstr[j]=str[i];
		 	 j++;
	     }
    }
    newstr[j]='\0'; //�̫�@���J�����r�� 
    puts(newstr);
    system("pause");//�Ȱ����� 
    return 0;//�^�ǭ� 0 
}
