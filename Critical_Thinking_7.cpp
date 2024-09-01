#include <thread>
#include <mutex>

int sharedVariable = 0;
std::mutex mtx;

void countToTwenty() {
    std::lock_guard lock(mtx);
    for(int i = 0; i <= 20; i++) {
        sharedVariable++;
    }
}

int main() {
    std::thread myThread(countToTwenty);
    myThread.join();
    {
        std::lock_guard lock(mtx);
        for(int i = 0; i <= 20;i++) {
            sharedVariable--;
        }
    }
    return 0;
}