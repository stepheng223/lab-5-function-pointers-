#include "process.h"   // IMPORTANT: this struct is defined here

int my_comparer(const void *p, const void *q)
{
    const Process *x = (const Process *)p;
    const Process *y = (const Process *)q;

    // PRIMARY KEY: priority DESCENDING (higher priority runs first)
    if (x->pri != y->pri)
        return y->pri - x->pri;

    // SECONDARY KEY: arrival time ASCENDING (earlier arrives first)
    if (x->art != y->art)
        return x->art - y->art;

    // TERTIARY KEY: pid ASCENDING (just to make ordering stable)
    return x->pid - y->pid;
