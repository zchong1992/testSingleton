
#include "class1.h"
#include "function1.h"
#include "function2.h"
#include <thread>
#include <unistd.h>
using namespace std;
volatile int gIsOk = 0;
void firstThread()
{
    int id = 0;
    while (gIsOk != 1)
    {
    }
    LOG(id, "get s1 start");
    getS1_1(id);
    LOG(id, "get s1 end\n");
    gIsOk++;
    while (gIsOk != 3)
    {
    }
    LOG(id, "get s2 start");
    getS1_2(id);
    LOG(id, "get s2 end\n");
    gIsOk++;
    while (gIsOk != 5)
    {
    }
    LOG(id, "get s3 start");
    getS1_3(id);
    LOG(id, "get s3 end\n");
    gIsOk++;
    while (gIsOk != 7)
    {
    }
    LOG(id, "get s4 start");
    getS1_4(id);
    LOG(id, "get s4 end\n");
}
void secondThread()
{
    int id = 1;
    while (gIsOk != 1)
    {
    }
    LOG(id, "get s1 start");
    getS2_1(id);
    LOG(id, "get s1 end\n");
    gIsOk++;
    while (gIsOk != 3)
    {
    }
    LOG(id, "get s2 start");
    getS2_2(id);
    LOG(id, "get s2 end\n");
    gIsOk++;
    while (gIsOk != 5)
    {
    }
    LOG(id, "get s3 start");
    getS2_3(id);
    LOG(id, "get s3 end\n");
    gIsOk++;
    while (gIsOk != 7)
    {
    }
    LOG(id, "get s4 start");
    getS2_4(id);
    LOG(id, "get s4 end\n");
}

int main()
{
    thread t1(firstThread);
    t1.detach();
    thread t2(secondThread);
    t2.detach();
    gIsOk = 1;
    while (1)
    {
        usleep(100);
    }
    return 0;
}