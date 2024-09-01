#include <iostream>
#include <thread>
#include <mutex>

int sharedValue = 0;
std::mutex mtx;

void countToTwenty() {
    std::lock_guard <std::mutex> lock(mtx);
    for(int i = 0; i <= 20; i++) {
        sharedValue++;
    }
}

int main() {
    std::thread myThread(countToTwenty);
    myThread.join();
    {
        std::lock_guard <std::mutex> lock(mtx);
        for(int i = 0; i <= 20; i++) {
            sharedValue--;
        }
    }
    std::cout << "The final value of \"sharedValue\" variable is " << sharedValue << "." << std::endl;
    return 0;
}