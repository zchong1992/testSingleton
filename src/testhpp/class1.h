#ifndef __CLASS_1_H__
#define __CLASS_1_H__
#include "stdio.h"
#include <unistd.h>
#define LOG(id, fmt, ...) printf("thread %d at[%s:%d] " fmt "\n", id, __FUNCTION__, __LINE__, ##__VA_ARGS__);

class classForSingleton1
{
public:
    static classForSingleton1 *getClassForSingleton1();

private:
    classForSingleton1();
};

class classForSingleton2
{
public:
    static classForSingleton2 *getClassForSingleton2();

private:
    classForSingleton2();
};

class classForSingleton3
{
public:
#if 0
    static classForSingleton3 *getClassForSingleton3()
    {

        if (mclassForSingleton3 == 0)
        {
            mclassForSingleton3 = new classForSingleton3();
        }
        return mclassForSingleton3;
    }
#else

    static classForSingleton3 *getClassForSingleton3()
    {
        static classForSingleton3 *m = 0;
        if (m == 0)
        {
            m = new classForSingleton3();
        }
        return m;
    }

#endif
private:
    static classForSingleton3 *mclassForSingleton3;
    classForSingleton3();
};
class classForSingleton4
{
public:
    static classForSingleton4 *getClassForSingleton4()
    {
        static classForSingleton4 m;
        return &m;
    }

private:
    classForSingleton4();
};

#endif