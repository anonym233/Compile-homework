// ---------------------------- parsermain.cpp ---------------------------------
// �﷨����������������

#include "parser.h"

void main(int argc, char *argv[])
{
	parser_class  parser;
	if (argc < 2)
	{	printf("please input Source File !\n" );	return;
	}
	parser.parser("test0.txt");
}