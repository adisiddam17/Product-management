#include "ProductManager.h"
#include<vector>
#include <iostream>
#include "Product.h"
using namespace std;
vector<Product> productVector;
ProductManager::ProductManager()
{
}

ProductManager::~ProductManager()
{
}
bool ProductManager:: insertProduct()
{
	int pId,quantity;
	string pName,pDesc;
	double price;
	cout<<"Enter product id : ";
	cin>>pId;
	cout<<"Enter product name : ";
	cin>>pName;
	cout<<"Enter product description : ";
	cin>>pDesc;
	cout<<"Enter product price : ";
	cin>>price;
	cout<<"Enter product quantity : ";
	cin>>quantity;
	Product pObj(pId,pName,pDesc,price,quantity);
	productVector.push_back(pObj);
	cout<<"Product inserted successfully"<<endl;
	
}
bool ProductManager:: updateProduct()
{
	int pid;
	cout<<"Enter product Id which you want to update : "<<endl;
	cin>>pid;
	vector<Product> :: iterator it;
	for(it=productVector.begin();it!=productVector.end();it++)
	{
		int id;
		id=it->getId();
		if(id=pid){
			int ch;
			cout<<"1.Id \n2.Name \n3.Description \n4.Quantity \n5.Price \n6.Likes \n";
			cout<<"What do you want to update : "<<endl;
			cin>>ch;
			switch(ch){
				case 1:{
					int id;
					cout<<"Enter id to update: "<<endl;
					cin>>id;
					it->setId(id);
					break;
				}
				case 2:{
					string name;
					cout<<"Enter Name to update : "<<endl;
					cin>>name;
					it->setName(name);
					break;
				}
				case 3:{
					string desc;
					cout<<"Enter description to update : "<<endl;
					cin>>desc;
					it->setDescription(desc);
					break;
				}
				case 4:{
					int quantity;
					cout<<"Enter id quantity to update : "<<endl;
					cin>>quantity;
					it->setQuantity(quantity);
					break;
				}
				case 5:{
					double price;
					cout<<"Enter price to update : "<<endl;
					cin>>price;
					it->setPrice(id);
					break;
				}
				case 6:{
					int likes;
					cout<<"Enter likes to update : "<<endl;
					cin>>likes;
					it->setLikes(id);
					break;
				}
				default:{
					cout<<"Invalid choice!!!";
					break;
				}

			}
		}
//		cout<<it->getName();
	}
}
bool ProductManager:: deleteProduct()
{
	int pid;
	cout<<"Enter product id to delete product : "<<endl;
	cin>>pid;
	vector<Product> :: iterator it;
	for(it=productVector.begin();it!=productVector.end();it++)
	{
		int id;
		id=it->getId();
		if(id==pid)
		{
		productVector.erase(it);
		cout<<"Product deleted successfully!!";		
		}
	}
	cout<<"Product not found!!!"<<endl;
}
void ProductManager:: getProducts()
{
	vector<Product> :: iterator it;
	for(it=productVector.begin();it!=productVector.end();it++)
	{
		cout<<"\n";
		cout<<"Id : "<<it->getId()<<endl;
		cout<<"Name : "<<it->getName()<<endl;
		cout<<"Description : "<<it->getDescription()<<endl;
		cout<<"Price : "<<it->getPrice()<<endl;
		cout<<"Likes : "<<it->getLikes()<<endl;
		cout<<"Quantity : "<<it->getQuantity()<<endl;
		cout<<"\n--------------------------------------------------------------------\n";

	}
}

