// ---------------------------- scannermain.cpp ---------------------------------
// �ʷ�����������������

#include "scanner.h"

void main(int argc, char *argv[])
{
	scanner_class  Scanner;
	token_rec token;
	if (argc < 2)
	{	printf("please input Source File !\n" );	return;
	}
	if(!Scanner.init_scanner(argv[1]))            //��ʼ���ʷ�������
	{	printf("Open Source File Error ! \n");		return;
	}
	printf("�Ǻ����    �ַ���      ����ֵ      ����ָ��\n");
    	printf("____________________________________________\n");
	while(1)
	{	token = Scanner.get_token();			//��üǺ�
		if(token.type != NONTOKEN)			//��ӡ�Ǻŵ�����
			printf("%4d,%12s,%12f,%12x\n",
			token.type, token.lexeme, token.value, token.func_ptr); 
		else	break;
	};
    	printf("____________________________________________\n");
	Scanner.close_scanner();
	getchar();
}