#include<string>
#include<jsoncpp/json/json.h>
#include<iostream>
#include "Waypoint.h"

using namespace std;

int main(){
    Json::Value library;
    Json::Value params;
    params["name"] = "this name";
    params["latitude"] = "this latitude";
    library["pt_name"]=params;
    

    cout <<library.toStyledString() << endl;
   

return 0;
}