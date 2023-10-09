#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include <iostream>
using namespace std;
class ProductManager
{
	public:
		ProductManager();
		~ProductManager();
		bool insertProduct();
		bool updateProduct();
		bool deleteProduct();
		void getProducts();
	protected:
};

#endif

