#include <iostream>
#include <thread>
void newThreadCallback(int * p)
{
	std::cout << "Inside Thread :  "" : p = " << p << std::endl;
	std::chrono::milliseconds dura(1000);
	std::this_thread::sleep_for(dura);
	*p = 19;
}
void startNewThread()
{
	int * p = new int();
	*p = 10;
	std::cout << "Inside Main Thread :  "" : *p = " << *p << std::endl;
	std::thread t(newThreadCallback, p);
	//t.detach();
	delete p;
	p = NULL;
	t.join();
}
class DummyClass {
public:
	DummyClass()
	{}
	DummyClass(const DummyClass & obj)
	{}
	void sampleMemberFunction(int x)
	{
		std::cout << "Inside sampleMemberFunction " << x << std::endl;
	}
};
//int main()
//{
//	startNewThread();
//	DummyClass dummobj;
//	std::thread obj(&DummyClass::sampleMemberFunction, &dummobj, 10);
//	obj.join();
//	//std::chrono::milliseconds dura(2000);
//	//std::this_thread::sleep_for(dura);
//	return 0;
//}