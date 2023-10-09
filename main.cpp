#include <iostream>
#include <vector>
#include "Product.h"
#include "ProductManager.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ProductManager mgr;
	int ch;
	do{
		cout<<"\n-----------------------------------------------------------------------\n";
		cout<<"1.Insert product \n2.Update product \n3.Display product \n4.Delete product \n5.Exit \n";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:{
				mgr.insertProduct();
				break;
			}
			case 2:{
				mgr.updateProduct();
				break;
			}
			case 3:{
				mgr.getProducts();
				break;
			}
			case 4:{
				mgr.deleteProduct();
				break;
			}
			case 5:{
				cout<<"Thank You!!!"<<endl;
				break;
			}
			default:{
				cout<<"Invalid choice"<<endl;
				break;
			}
		}
	}while(ch!=5);
	return 0;
}

