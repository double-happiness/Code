void menu()
{
	printf("1. play    0.exit\n");
}
int main()
{
	int input = 1;
	while(input)
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			{
				int ret = 0;
				srand( (unsigned)time( NULL ) );
				ret = rand() % 100;
				while(1)
				{
					int n = 0;
					printf("���>:");
					scanf("%d", &n);
					if(n > ret)
					{
						printf("��´���\n");
					}
					else if(n < ret)
					{
						printf("���С��\n");
					}
					else
					{
						printf("��ϲ�㣬�¶���\n");
						break;
					}
				}
				printf("%d\n",ret);
			}
			break;
		case 0:
			//
			break;
		}
	}
	return 0;
}