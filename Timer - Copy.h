#pragma once
#include <chrono>
using namespace std;
using namespace std::chrono;
class Timer
{
public:

	void start();
	void stop();
	int elapsed();

	chrono::time_point<std::chrono::high_resolution_clock> startTime;
	chrono::time_point<std::chrono::high_resolution_clock> endTime;

};

