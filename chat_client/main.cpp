#include <iostream>
#include <string>
#include <iostream>
#include "network_manager.hpp"

using namespace std;

int main(){
    NetworkManager manager;
    while(true){
        cout << "input message > " ;
        string str;
        //cin >> str;
        getline(cin,str);
        manager.sendMsg(str);        
        cout << endl;       
    }
    return 0;
}
