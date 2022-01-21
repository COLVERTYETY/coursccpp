#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <locale>
#include <vector>
#include <bits/stdc++.h>

bool cmp(std::pair<std::string, int>& a, std::pair<std::string, int>& b)
{
    return a.second < b.second;
}

int main(int argc, char **argv){
    // fstream myFile;
    if(argc==2 && ((std::string)argv[1]).find(".txt") != std::string::npos){
        std::ifstream myFile(argv[1]);
        // std::stringstream data;
        // data << myFile.rdbuf();
        std::map<std::string, int> frequency;
        std::string word;
        std::string wordaslower;
        std::locale loc;
        while(myFile >> word){
            wordaslower="";
            for(auto elem : word){
                wordaslower+= std::tolower(elem,loc);
            }
            if(frequency.count(wordaslower)>0){
                frequency[word]+=1;
            }else{
                frequency.insert({wordaslower,1});
            }
        }
        myFile.close();
        std::vector<std::pair<std::string, int>> sorted;
        for (auto& pair : frequency) {
            sorted.push_back(pair);
        }
        sort(sorted.begin(),sorted.end(),cmp);
        for(auto& p :sorted){
            std::cout << p.first <<" := "<< p.second <<"\n";
        }
    }else{
        std::cerr << "wrong args\n";
    }
    return 0;
}