#include <stdio.h>

int main()
{
	// ��Ʈ������ : << , >> , &, |, ~, ^(eXclusive OR)
	short n3 = 0;
	short n1 = 3; //0011
	short n2 = 5; //0101
	//n3 = n1 & n2; //0001 //��Ʈ and ������
	n3 = n1 | n2; //0111 // ��Ʈ or  ������

	printf("n3=%d\n", n3);
	
	n3 = ~n1;
	printf("n3=%d\n", n3);

	//XOR
	n3 = n1 ^ n2;
	printf("n3=%d\n", n3);
	
	//0011 >>>1100  
	n3 = n1 << 2; //n1�� �������� 2��Ʈ �̵���Ŵ
	printf("n3=%d\n", n3);

	//���������� �̵��� �ÿ��� ��ȣ�� �ٲ��� ����
	n3 = n2 >> 2;
	printf("n3=%d\n", n3);

	return 0;

}