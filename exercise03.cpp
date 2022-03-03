#include<iostream>

using namespace std;

struct Box {
	int height;
	int width;
	int length;
	
}Box1,Box2;

int volume(int height, int width, int length);

int main(){
	int totalVolume;
	
	cout<<"Enter Box 1 Height : ";
	cin>>Box1.height;
	cout<<"Enter Box 1 Width : ";
	cin>>Box1.width;
	cout<<"Enter Box 1 Length : ";
	cin>>Box1.length;
	
	cout<<"Enter Box 2 Height : ";
	cin>>Box2.height;
	cout<<"Enter Box 2 Width : ";
	cin>>Box2.width;
	cout<<"Enter Box 2 Length : ";
	cin>>Box2.length;
	
	totalVolume=volume(Box1.height, Box1.width, Box1.length)+volume(Box2.height, Box2.width, Box2.length);
	
	cout << "Volume of Box is " << totalVolume << endl;
	
	return 0;
}
//Implement the function
int volume(int height, int width, int length){
	
	int vol;
	
	vol=height*width*length;
	
	return vol;
}



