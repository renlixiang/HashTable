#ifndef MAN_H
#define MAN_H

#include <People.h>


class man : public People
{
    public:
        man();
        virtual ~man();
        void introudce();

    protected:

    private:
        string sex = "��";
};

#endif // MAN_H
