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
		printf("请选择>:");
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
					printf("你猜>:");
					scanf("%d", &n);
					if(n > ret)
					{
						printf("你猜大了\n");
					}
					else if(n < ret)
					{
						printf("你猜小了\n");
					}
					else
					{
						printf("恭喜你，猜对了\n");
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