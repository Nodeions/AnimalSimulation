#include <iostream>
#include "animal.h"


//--------------Altitude------------

Altitude::Altitude()
{
	altitudeHeight = 0;
}

Altitude::~Altitude()
{

}

void Animal::Eat(string name) 
{

}


//--------------Animal------------


Animal::Animal()
{
	posY = 0;
	distance = 0;
	weight = 0;
	isCanEat = false;
	string name = nullptr;
}

Animal::~Animal() 
{

}


//--------------Fish------------


Fish::Fish()
{
	isFish = true;
}

Fish::~Fish()
{

}


//--------------Bird------------


Bird::Bird()
{
	isBird = true;
}

Bird::~Bird()
{

}


//--------------Eagle------------


Eagle::Eagle()
{
	isCarnivore = false;
}

Eagle::~Eagle()
{

}


//--------------Shark------------


Shark::Shark()
{
	isCarnivore = false;
}

Shark::~Shark()
{

}


//--------------Swan------------


Swan::Swan()
{
	isCarnivore = false;
}

Swan::~Swan()
{

}

