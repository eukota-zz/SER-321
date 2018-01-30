#include<jsoncpp/json/json.h>
#include "Waypoint.h"
#include<iostream>
#include<stdlib.h>
#include<string>

/*
 * Copyright 2018 Justin Fitzpatrick,
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * Purpose: demonstrate classes, alloc, init, in the context of
 * distance and direction calculations from one earth position (waypoint)
 * to another.
 * Ser321 Principles of Distributed Software Systems
 * see http://pooh.poly.asu.edu/Ser321
 * @author Justin Fitzpatrick jkfitzpa@asu.edu
 *         Software Engineering, CIDSE, IAFSE, ASU Poly
 * @version January 2018
 */

using namespace std;


//Default Waypoint constructor, all values null or zero
Waypoint::Waypoint(){
    lat = lon = ele = 0;
    name = address = "";
}
//Waypoint constructor using all the member values as parameters
Waypoint::Waypoint(double latitude, double longitude, double elevation, string pt_name, string pt_address){
    lat = latitude;
    lon = longitude;
    ele = elevation;
    name = pt_name;
    address = pt_address;
}
//Creates a Waypoint object from a Json string
Waypoint::Waypoint(const Json::Value obj){
    
    
}


//Converts a Waypoint into a JSON Value representing the member values
Json::Value Waypoint::toJson(){
    Json::Value new_pt = new Json::Value(this->name);
    
    Json::Value jlat = new Json::Value("latitude");
    jlat.append(Json::Value(this->lat));
    new_pt.append(jlat);
        
    Json::Value jlon = new Json::Value("longitude");
    jlon.append(Json::Value(this->lon));
    new_pt.append(jlon);
    
    
    Json::Value jele = new Json::Value("elevation");
    jele.append(Json::Value(this->ele));
    new_pt.append(jele);
    
    
    Json::Value jname = new Json::Value("name");
    jname.append(Json::Value(this->name));
    new_pt.append(jname);
    
    Json::Value jaddr = new Json::Value("addr");
    jaddr.append(Json::Value(this->address));
    new_pt.append(jaddr);
}

void Waypoint::editWaypoint(double latitude, double longitude, double elevation, string pt_name, string pt_address){
    this->lat=latitude;
    this->lon=longitude;
    this->ele=elevation;
    this->name=pt_name;
    this->address=pt_address;
}


