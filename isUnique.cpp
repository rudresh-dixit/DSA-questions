#include <bits/stdc++.h>

bool isUnique(std::string str){
    std::unordered_map<char,bool> characterMap;
    for (int i=0;i<str.size();i++){
        if (characterMap[str.at(i)]){
            return false;
        }
        characterMap[str.at(i)]=true;
    }
    return true;
}

int main()
{
    std::cout<<isUnique("hel*)(o");

	return 0;
}
