#include <iostream>
#include <csignal>
#include <windows.h>

using namespace std;

void signalHandler(int signum)
{
	cout << "Interrupt signal (" << signum << ") received.\n";

	// 清理并关闭
	// 终止程序 

	exit(signum);

}

int main()
{
	int i = 0;
	// 注册信号 SIGINT 和信号处理程序
	signal(SIGINT, signalHandler);

	while (++i) {
		cout << "Going to sleep...." << endl;
		if (i == 3) {
			raise(SIGINT);		//改变中断信号，唤醒中断程序
		}
		Sleep(1);
	}

	return 0;
}