#include<iostream>
#include<vector>
/// <summary>
/// vector is very vast topic it has multiple term can be used and understand for dynamic array.vector is different from this because
/// i can modify it size as per requierment of user or proggermmer that why it is mostly used in cpp instested normal array,
/// in the following there 2 big example how we can print the vector array,insert element it with specfic needs
/// with that it also explanes how to do operator overwriteting for spicafic class/struct 
/// </summary>

using namespace std;

struct Conner {
	float a, b, c, d;

};
//this is the method that can rewrite the original writeing operator with other use case 
ostream& operator << (ostream& stream, const Conner& conner) {
	stream << conner.a << " " << conner.b << " " << conner.c << " "<< conner.d << " ";
	return stream;
}


int main() {
	vector<int> vec = { 2,3,4,5,6,7,8 };

	vec.push_back(9);
	vec.push_back(10);



	for (auto i = vec.begin(); i != vec.end(); i++) {
		cout << *i << endl;
	}

	vector<Conner> conners;
	conners.push_back({ 1,2,3,4 });
	conners.push_back({ 5,6,7,8 }); 
	conners.push_back({ 9,10,11,12 }); 
	conners.push_back({ 13,14,15,16});
	//the overwitre proceess that we have done is for this for printing those terms in tranditional method of printing arrary(vector)
	for (int i = 0; i < conners.size(); i++) {
		cout << conners[i] << endl;
	}

}