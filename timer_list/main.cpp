/*
 * > File Name: main.cpp
 * > Author: Jack Kang
 * > Mail: kangyijie@xiyoulinux.org
 * > Created Time: 2017年10月11日 星期三 17时45分21秒
 */

#include <iostream>
#include "./TimerList.h"

#include "./Timer.h"
int func(void *arg)
{
    return 1;
}
int main(void)
{
    TimerList<Timer> timerlist(5);
    
    Timer t;
    t.fd = 1;
    t.timerId = 2;
    t.timeout = time(NULL);
    t.doJob = func;
    timerlist.addEvent(t);

}