#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
	private:
		int productId;
		string productName,description;
		double price;
		int quantity,likes;
	public:
		Product();
		Product(int id,string pname,string desc,double price,int quantity);
		int getId();
		string getName();
		string getDescription();
		double getPrice();
		int getQuantity();
		int getLikes();
		
		void setId(int id);
		void setName(string name);
		void setDescription(string desc);
		void setPrice(double price);
		void setQuantity(int quantity);
		void setLikes(int likes);

		~Product();
	protected:
};

#endif

