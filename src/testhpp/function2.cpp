#include "function2.h"
#include "class1.h"

void getS2_1(int id)
{
    void *ptr = classForSingleton1::getClassForSingleton1();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton1::getClassForSingleton1();
    LOG(id, "get addr :%X", (int *)ptr);
}
void getS2_2(int id)
{
    void *ptr = classForSingleton2::getClassForSingleton2();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton2::getClassForSingleton2();
    LOG(id, "get addr :%X", (int *)ptr);
}
void getS2_3(int id)
{
    void *ptr = classForSingleton3::getClassForSingleton3();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton3::getClassForSingleton3();
    LOG(id, "get addr :%X", (int *)ptr);
}

void getS2_4(int id)
{
    void *ptr = classForSingleton4::getClassForSingleton4();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton4::getClassForSingleton4();
    LOG(id, "get addr :%X", (int *)ptr);
}