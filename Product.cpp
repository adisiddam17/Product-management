#include "Product.h"
#include <iostream>
using namespace std;
Product::Product()
{
	this->productId=1;
	this->productName="ABC";
	this->price=2000;
	this->quantity=4;
	
}

Product::Product(int id,string pname,string desc,double price,int quantity)
{
	this->productId=id;
	this->productName=pname;
	this->description=desc;
	this->price=price;
	this->quantity=quantity;
	this->likes=0;
}
int Product:: getId(){
	return productId;
}
string Product:: getName(){
	return productName;
}
string Product:: getDescription(){
	return description;
}
double Product::getPrice(){
	return price;
}
int Product::getQuantity(){
	return quantity;
}
int Product::getLikes(){
	return likes;
}
void Product:: setId(int id){
	this->productId=id;
}
void Product:: setName(string name){
	this->productName=name;
}
void Product:: setDescription(string desc){
	this->description=desc;
}
void Product:: setPrice(double price){
	this->price=price;	
}
void Product:: setQuantity(int quantity){
	this->quantity=quantity;	
}
void Product:: setLikes(int likes){
	this->likes=likes;	
}
Product::~Product()
{
}

