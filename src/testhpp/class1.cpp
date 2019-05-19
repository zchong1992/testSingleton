#include "class1.h"

#include "stdlib.h"
#include "stdio.h"
#include <unistd.h>

classForSingleton1 *classForSingleton1::getClassForSingleton1()
{
    static classForSingleton1 m;
    return &m;
}

classForSingleton2 *classForSingleton2::getClassForSingleton2()
{
    static classForSingleton2 *m = 0;
    if (m == 0)
    {
        m = new classForSingleton2();
    }
    return m;
}

classForSingleton1::classForSingleton1()
{
    printf("classForSingleton1 start at addr:%X\n", this);
    usleep(1000 * 1000);
    printf("classForSingleton1 end\n");
}

classForSingleton2::classForSingleton2()
{
    printf("classForSingleton2 start at addr:%X\n", this);
    usleep(1000 * 1000);
    printf("classForSingleton2 end\n");
}

classForSingleton3::classForSingleton3()
{
    printf("classForSingleton3 start at addr:%X\n", this);
    usleep(1000 * 1000);
    printf("classForSingleton3 end\n");
}

classForSingleton4::classForSingleton4()
{
    printf("classForSingleton4 start at addr:%X\n", this);
    usleep(1000 * 1000);
    printf("classForSingleton4 end\n");
}