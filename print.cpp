#include <iostream>
#include <string>
#include "print.h"
#include "animal.h"

void printAnimalLetter(Animal animal) {
	switch (animal.m_type)
	{
	case requin:
		cout << "R";
	case aigle:
		cout << "A";
	case cygne:
		cout << "C";
	}
}