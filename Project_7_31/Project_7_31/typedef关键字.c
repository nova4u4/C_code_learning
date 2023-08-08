#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main06()
{
	// typedef  类型重定义
	// 1. 类型名过长 重复使用  如unsigned int num = 0 ;  
	// 使用 typedef unsigned int XX  之后的同类型 就可以 XX num = 0；
	// 2. 指代结构体 
	
	/*struct Node
	{
		int data;
		struct Node* next;
	};*/
	//    改为
	/*  typedef struct Node
	  {
	  	  int data;
	  	  struct Node* next;
	   };  NN                           之后用NN可以代替此结构体(起个小名)  */
	return 0;
}