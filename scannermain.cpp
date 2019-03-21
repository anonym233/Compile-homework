// ---------------------------- scannermain.cpp ---------------------------------
// 词法分析器测试主程序

#include "scanner.h"

void main(int argc, char *argv[])
{
	scanner_class  Scanner;
	token_rec token;
	if (argc < 2)
	{	printf("please input Source File !\n" );	return;
	}
	if(!Scanner.init_scanner(argv[1]))            //初始化词法分析器
	{	printf("Open Source File Error ! \n");		return;
	}
	printf("记号类别    字符串      常数值      函数指针\n");
    	printf("____________________________________________\n");
	while(1)
	{	token = Scanner.get_token();			//获得记号
		if(token.type != NONTOKEN)			//打印记号的内容
			printf("%4d,%12s,%12f,%12x\n",
			token.type, token.lexeme, token.value, token.func_ptr); 
		else	break;
	};
    	printf("____________________________________________\n");
	Scanner.close_scanner();
	getchar();
}