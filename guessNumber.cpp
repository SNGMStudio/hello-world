#include<time.h>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
void menu()
{
	printf("------------------------------\n");
	printf("|         ��ʼ��Ϸ��1         |\n");
	printf("|         �˳���Ϸ��0         |\n");
	printf("------------------------------\n");
}

int count()
{
	static int maxGuess = 20;  //���ɲ²����
	cout << "ʣ�����" <<--maxGuess<< endl;
	return maxGuess;
}

int main()
{
	int num = 1;
	printf("��ӭʹ�ò�������Ϸ\n");
	while (num)
	{
		menu();
	    printf("��ѡ��");
		scanf_s("%d", &num);//����0��1��ѡ��˵���0��1
		switch (num)
		{
		case 1:
		{
			int n = 0;
			unsigned short inputNumber = 0;
			int min = 0;
			int max = 1000;
			
			srand((unsigned int)time(NULL));//����ʱ������޷��ŵ����������
			n = rand() % 1001;
			printf("���һ����0-1000��֮�����\n");
			while (1)
			{
				
				cin >> inputNumber;        //�����������Ĵ�С
				if (inputNumber> n)
				{   
					max = inputNumber;
					cout << "��´��ˣ��������" << min <<"��"<<max<< "֮��" << endl;
					
					int j = count();
					if (j == 0)
					{
						cout << "��Ϸ������" << endl;
						break;
					}
					
				}
				else if (inputNumber < n)
				{   
					min = inputNumber;
					cout << "���С�ˣ��������" <<min<<"��"<< max<<"֮��" << endl;
				    int k = count();
					if (k == 0)
					{
						cout << "��Ϸ������" << endl;
						break;
					}
				}
				else
				{
					printf("��ϲ�㣬�¶���\n");
					break;
				}
				
			}
			break;
		}
		default:
			printf("��Ϸ�˳�\n");
			break;
		}
	}
	return 0;
}