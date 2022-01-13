#ifndef TOWER_H
#define TOWER_H
#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <sstream>
#include "../Disk/disk.h"

class Tower{
    private :
        std::string name;
    public :
        std::vector<Disk> myDisks;
        void pushDisk(Disk d);
        Disk popDisk();
        std::string getname()const;
        std::string getcontent()const;
        bool isempty();
        Tower();
        Tower(const Tower& T);
        Tower(std::string name);
        Tower(std::string name, int disk_n[], int ndisks);
        Tower(std::string name, Disk *disk_n, int ndisks);
        friend std::ostream& operator<<(std::ostream& out, const Tower & t);
};

#endif