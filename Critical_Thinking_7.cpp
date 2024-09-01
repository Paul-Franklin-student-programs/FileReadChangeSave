#include <iostream>
#include <thread>
#include <mutex>

int sharedVariable;
std::mutex mtx;

void countToTwenty() {
    std::lock_guard<std::mutex> lock(mtx);
    for(int i = 0; i <= 20; i++) {
        sharedVariable++;
    }
}

int main() {
    countToTwenty();
    std::lock_guard<std::mutex> lock(mtx);
    for(int i = 0; i>=20;i++) {
        sharedVariable--;
    }


}