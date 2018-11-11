#include <iostream>
#include <thread>
#include <algorithm>
#include <vector>
class WorkerThread
{
public:
	void operator()()
	{
		std::cout << "Worker Thread " << std::this_thread::get_id() << " is Executing" << std::endl;
	}
};

class ThreadRAII
{
	std::thread& m_thread;
public:
	ThreadRAII(std::thread& obj) :m_thread(obj) {};
	~ThreadRAII() {
		if (m_thread.joinable())
		{
			m_thread.detach();
		}
	}
};

//int main()
//{
//	std::vector<std::thread> threadLists;
//	for (int i = 0; i < 10; i++)
//	{
//		threadLists.push_back(std::thread(WorkerThread()));
//	}
//	std::cout << "wait for all threads to finish" << std::endl;
//	std::for_each(threadLists.begin(), threadLists.end(), std::mem_fn(&std::thread::join));
//	std::cout << "exit from main thread" << std::endl;
//	return 0;
//}