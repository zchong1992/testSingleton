#include "function1.h"
#include "class1.h"

void getS1_1(int id)
{
    void *ptr = classForSingleton1::getClassForSingleton1();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton1::getClassForSingleton1();
    LOG(id, "get addr :%X", (int *)ptr);
}
void getS1_2(int id)
{
    void *ptr = classForSingleton2::getClassForSingleton2();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton2::getClassForSingleton2();
    LOG(id, "get addr :%X", (int *)ptr);
}
void getS1_3(int id)
{
    void *ptr = classForSingleton3::getClassForSingleton3();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton3::getClassForSingleton3();
    LOG(id, "get addr :%X", (int *)ptr);
}
void getS1_4(int id)
{
    void *ptr = classForSingleton4::getClassForSingleton4();
    LOG(id, "get addr :%X", (int *)ptr);
    ptr = classForSingleton4::getClassForSingleton4();
    LOG(id, "get addr :%X", (int *)ptr);
}