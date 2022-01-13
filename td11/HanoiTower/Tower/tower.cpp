#include "tower.h"

void Tower::pushDisk(Disk d){
    myDisks.push_back(d);
}

Disk Tower::popDisk(){
    if(!myDisks.empty()){
        Disk temp = myDisks.back();
        myDisks.pop_back();
        return temp;
    }
    else{
        std::cerr << " ATTEMPT TO POP EMPTY STACK\n";
        throw std::invalid_argument( "attempt to pop empty stack" );
    }
}

std::string Tower::getcontent()const{
    std::ostringstream mycontent;
    for(int i=0;i<(int)myDisks.size();i++){
        mycontent << myDisks[i];
    }
    // TODO delete temp
    return mycontent.str();
}
std::string Tower::getname()const{
    return name;
}

bool Tower::isempty(){
    return myDisks.empty();
}

Tower::Tower(){
    name = "auto";
}

Tower::Tower(const Tower& T){
    name = T.getname();
    myDisks = T.myDisks;
}

Tower::Tower(std::string aname){
    name = aname;
}

Tower::Tower(std::string aname, int disk_n[], int ndisks){
    name = aname;
    for(int i=0;i<ndisks;i++){
        auto k = new  Disk(disk_n[i]);
        myDisks.push_back(*k);
    }
}

std::ostream& operator<<(std::ostream& out, const Tower & t){
    out << t.getname()<<" |"<<t.getcontent();
    return out;
}