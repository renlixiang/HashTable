#include <iostream>
#include "People.h"
#include "man.h"
#include "woman.h"

using namespace std;

int main()
{

    man *m = new man();
    m->setName("man");
    m->setAge(80);

    woman *w = new woman();
    w->setName("woman");
    w->setAge(15);


    People *p = (People *)m;
    p->introudce();
    p = (People *) w;
    p->introudce();

    delete m;
    delete p;
    return 0;
}
