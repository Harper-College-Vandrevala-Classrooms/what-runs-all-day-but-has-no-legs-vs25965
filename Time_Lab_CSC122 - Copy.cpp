
#include <iostream>
#include <chrono>
#include <iomanip>
#include <thread>
#include "Timer.h"


using namespace std;
using namespace std::chrono;


int main()
{


    Timer timer1;
    timer1.start();

    // Code to time
    this_thread::sleep_for(chrono::seconds(5));

    timer1.stop();

    cout << "Elapsed time: " << timer1.elapsed() << " seconds" << endl;



    return 0;
}