#include<iostream>
#include<mutex>
#include<pthread.h> 
using namespace std;
//����ģʽ
//�����ľ�������ģʽ��ʵ��
class singleton
{
protected:
	singleton()
	{
		pthread_mutex_init(&mutex);
	}
private:
	static singleton* p;
public:
	static pthread_mutex_t mutex;
	static singleton* initance();
};
pthread_mutex_t singleton::mutex;
singleton* singleton::p = NULL;
singleton* singleton::initance()
{
	if (p == NULL)
	{
		pthread_mutex_lock(&mutex);
		if (p == NULL)
			p = new singleton();
		pthread_mutex_unlock(&mutex);
	}
	return p;
}
//�ڲ���̬����������ģʽ
class singleton
{
protected:
	singleton()
	{
		pthread_mutex_init(&mutex);
	}
public:
	static pthread_mutex_t mutex;
	static singleton* initance();
	int a;
};

pthread_mutex_t singleton::mutex;
singleton* singleton::initance()
{
	pthread_mutex_lock(&mutex);
	static singleton obj;
	pthread_mutex_unlock(&mutex);
	return &obj;
}