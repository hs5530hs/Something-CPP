#include <iostream>
#include <thread>

class DisplayThread
{
public:
	void operator()() {
		for (int i = 0; i < 10000; i++)
		{
			std::cout << "display thread" << std::endl;
		}
	}

};
void thread_function()
{
	for (int i = 0; i < 10000; i++)
		std::cout << "thread function Executing" << std::endl;
}
//int main()
//{
//	std::thread threadObj((DisplayThread()));
//	std::thread obj(thread_function/*[] {for (int i = 0; i < 100; ++i) std::cout << "test lambda" << std::endl; }*/);
//	for (int i = 0; i < 100; i++)
//	{
//		std::cout << "from main thread" << std::endl;
//	}
//	std::cout << "wait for thread to complete" << std::endl;
//	threadObj.detach();
//	obj.detach();
//	std::cout << "exit from main thread" << std::endl;
//	return 0;
//}