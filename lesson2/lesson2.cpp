#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	// �����
	printf("�ȳ��ϼ���\n"); //\n : �ٹٲ� . new line
	printf("�ȳ��ϼ���\t"); // \t : tab ��� ����
	printf("tab��ŭ �̵���");
	printf("hello c");
	printf("\rwelcome c"); // \r : Ŀ���� ������ ó�� ��ġ�� �̵���Ų��
	printf("\b\b c++\n"); //\b : �齺���̽� ����� �Ѵ�
	printf("��⵵ \"������\"\n"); //\" \" , �ο��ȣ ���
	printf("c:\\test.txt\n");//\\ : \��ȣ�� ����Ѵ�



	int age = 10; //4����Ʈ
	char ch = 'k'; //1����Ʈ
	short kor = 96; //2����Ʈ
	float pi = 3.14F; //4����Ʈ
	double math = 42.195;

	//���Ĺ���
	printf("���̴� %d���Դϴ�\n", age);
	printf("%corea\n", ch);
	printf("��������: %hd\n", kor); //short�� ����
	printf("PI: %4.2f\n", pi); // �Ҽ��� ���� 4�ڸ��� Ȯ���ϰ� �Ҽ������ϴ� 2�ڸ��� ������
	printf("marathon: %6.1f\n", math);
	printf("marathon: %.3f\n", math);
	printf("%5d", age); //�ټ��ڸ��� Ȯ���ϰ� ���������Ͽ� ���
	printf("%-5d\n", age); //�ټ��ڸ��� Ȯ���ϰ� ���������Ͽ� ���

	//16������ ���
	printf("10=%x\n", age);

	//�ۼ�Ʈ ���
	printf("���� %d%%\n", kor);

	// %s : ���ڿ� ���
	printf("�� �̸��� %s �Դϴ�\n", "ȫ�浿");

	//%p : Ư�� ��ü�� �޸� �ּҸ� ����Ѵ�
	
	printf("ch�� �ּ�: %p\n", &ch); // & : �ּ� ������ ���� �տ� �ܵ����� ���� ���

	printf("�� �̸��� %s �̰�, ���̴� %d�� �Դϴ�", "ȫ�浿", age);
	
	printf("\n\n==========================================\n");

	//ǥ�� �Է� �Լ� scanf
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age); //������ ������ �� ���� �Է¹޴´�
	printf("�� �̸��� %s �̰�, ���̴� %d�� �Դϴ�\n", "ȫ�浿", age);
	
	printf("����� Ű�� �Է��Ͻÿ�: ");
	float height;
	scanf("%f", &height);
	
	printf("�Է¹��� Ű�� %.2f cm �Դϴ�\n", height);

	printf("���ĺ� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &ch); //���ĺ� �� ���� �Է¹ޱ�
	printf("�Էµ� ���ĺ��� %c�Դϴ� \n", ch);

	printf("���������� �Է��ϼ���: ");
	scanf("%hd", &kor); //kor�� short���̹Ƿ� �ݵ�� %hd�� ����ؾ��Ѵ�
	printf("�Էµ� ���������� %d���Դϴ� \n", kor);

	short eng;
	short history;
	printf("����,����,���� ������ �Է��ϼ���: ");
	scanf("%hd %hd %hd", & kor, & eng, & history);
	printf("����: %d,  ����: %d. ����: %d\n", kor, eng, history);


	return 0;
}
