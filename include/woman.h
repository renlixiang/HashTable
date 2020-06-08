#ifndef WOMAN_H
#define WOMAN_H

#include <People.h>


class woman : public People
{
    public:
        woman();
        virtual ~woman();
        void introudce();

    protected:

    private:
        string sex = "Ů";
};

#endif // WOMAN_H
