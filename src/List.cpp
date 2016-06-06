/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	//TODO: Implement this method
	if(_first == NULL) 		//checking if the list is empty
		{
			_first = element;
			_last = element;
			cout<< "Article added"<<endl;
		}else{ 				//checking if the list is not empty
			_last -> _next = element;
			_last = element;
		}
	//cout << "You should write the code for adding " << element -> _name << endl;

}

void List::remove(int index)
{
	//TODO: Implement this method
	List* list = new List();

	  int i;
	  Element *actual;
	  Element *sup_element;
	  actual = list->_first;

	  for (i = 1; i < index; ++i)
	    actual = actual->_next;

	  sup_element = actual->_next;
	  actual->_next = actual-> _next-> _next;
	  if(actual->_next == NULL)
	          list ->_last = actual;
	  free (sup_element);
	//cout << "You should write the code for removing the index " << index << endl;
}
