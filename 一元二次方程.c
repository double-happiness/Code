//#include <stdio.h>
//#include <math.h>
//
//#define EPS 0.000000001
//int main()
//{
//	double a = 0.0,b = 0.0,c = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if( (a > -EPS) && (a<EPS) )
//	{
//		printf("����һԪ���η���\n");
//	}
//	else
//	{
//		double disc = b*b - 4*a*c;
//		if((disc > -EPS) && (disc < EPS))
//		{
//			printf("������ȵ�ʵ��:%lf %lf\n",-b/(2*a), -b/(2*a));
//		}
//		else if(disc > 0)
//		{
//			printf("����������ȵ�ʵ��:%lf %lf\n", 
//				(-b+sqrt(disc))/(2*a),
//				(-b- sqrt(disc))/(2*a) );
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	return 0;
//}