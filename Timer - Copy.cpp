#include "Timer.h"


void Timer::start() {
    startTime = chrono::high_resolution_clock::now();
}

void Timer::stop() {
    endTime = chrono::high_resolution_clock::now();
}

int Timer::elapsed() {
    return chrono::duration<double>(endTime - startTime).count();
}
