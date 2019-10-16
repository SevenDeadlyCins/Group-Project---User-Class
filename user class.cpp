#include <iostream>
#include <vector>
using namespace std;

//Class
class User {
	// Access specifier 
private:

	// Data Members 
	string name;
	int age;
	Cabinet cabinet;
	vector<Favorite> favoriteList;

public:

	// getter and setter for Name 
	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	//getter setter for Age
	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}

	//getter setter for Cabinet

	void setCabinet(Cabinet cabinet) {
		this->cabinet = cabinet;
	}

	Cabinet getCabinet() {
		return cabinet;
	}

	//getter setter for Vector of Favorite

	void setFavoriteList(vector<Favorite> favoriteList) {
		this->favoriteList = favoriteList;
	}

	vector<Favorite> getFavoriteList() {
		return favoriteList;
	}
};
