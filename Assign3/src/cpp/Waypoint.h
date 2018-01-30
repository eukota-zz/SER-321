#include <iostream>
#include <string>
#include <jsoncpp/json/json.h>

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

class Waypoint{

public: 
    Waypoint();
    Waypoint(double latitude, double longitude, double elevation, string name, string address);
    Waypoint(const Json::Value input);
    Json::Value toJson();
    void editWaypoint(double latitude, double longitude, double elevation, string pt_name, string pt_address);
    double lat, lon, ele;
    string name, address;
};