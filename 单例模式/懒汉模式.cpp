#include<iostream>
#include<mutex>
#include<pthread.h> 
using namespace std;
//懒汉模式
//加锁的经典懒汉模式的实现
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
//内部静态变量的懒汉模式
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