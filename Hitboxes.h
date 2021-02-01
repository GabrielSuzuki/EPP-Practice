#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;
//create Hitboxes class
// takes in string filename
//constructor reads in data 
struct character {
	string name;
	string type;
	int length = 0;
	int width = 0;
	int hitboxes = 0;
};


class Hitboxes {
	public:
		Hitboxes(string filename);

		string smallestCharacter();

		string smallestType();
	private:
		vector<character> characterList;
};

Hitboxes::Hitboxes(string filename) {
	ifstream fin;
	fin.open(filename);
	while (fin) {
		character person;
		fin >> person.name;
		fin >> person.type;
		fin >> person.length;
		fin >> person.width;
		person.hitboxes = person.width * person.length;
		if (person.hitboxes != 0) {
			characterList.push_back(person);
		}
	}
	fin.close();
}
string Hitboxes::smallestCharacter(){
	vector<character>::iterator it = characterList.begin();
	string smallestCharacter = it->name;
	int smallest = it->hitboxes;
	for (vector<character>::iterator it = characterList.begin(); it != characterList.end(); ++it) {
		if (smallest > it->hitboxes) {
			smallestCharacter = it->name;
		}
	}
	return smallestCharacter;
}

string Hitboxes::smallestType() {
	string smallesttype;
	int smallesttotal;
	map<string, int> mymap;
	for (vector<character>::iterator it = characterList.begin(); it != characterList.end(); ++it) {
		if (mymap.find(it->type) == mymap.end()) {
			mymap[it->type] = it->hitboxes;
		}
		else {
			mymap[it->type] += it->hitboxes;
		}
	}
	map<string, int>::iterator it = mymap.begin();
	smallesttotal = it->second;
	for (map<string, int>::iterator it = mymap.begin(); it != mymap.end(); ++it) {
		if (it->second <= smallesttotal) {
			smallesttotal = it->second;
			smallesttype = it->first;
		}
	}
	return smallesttype;
}
	