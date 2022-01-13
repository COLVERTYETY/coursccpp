#ifndef DISK_H
#define DISK_H
#include <iostream>

class Disk{
    private :
        int diameter;
    public :
        int getd()const;
        Disk(const int d);
        Disk(const Disk& D);
        Disk();
        friend std::ostream& operator<<(std::ostream& out, const Disk & d);
};

#endif