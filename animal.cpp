#include <iostream>
#include "animal.h"
#include <math.h>

Animal::Animal(int weight, int posY, int id)
{
	m_type = 0;
	m_id = 0;
	m_weight = 0;
	m_positionY = 0;
}

Animal::~Animal() 
{

}

void Animal::MoveToSea(int distToSea, Animal& animalToMove) 
{
	if (animalToMove.m_isBird && distToSea >= 0) 
	{
		while (animalToMove.m_positionY > distToSea)
		{
			animalToMove.m_positionY -= 1;

			if (animalToMove.m_positionY < distToSea)
			{
				animalToMove.m_positionY = distToSea;
				break;
			}
		}
	}
	else if (animalToMove.m_isFish && distToSea <= 0) 
	{
		while (animalToMove.m_positionY < distToSea)
		{
			animalToMove.m_positionY += 1;

			if (animalToMove.m_positionY > distToSea)
			{
				animalToMove.m_positionY = distToSea;
				break; 
			}
		}
	}
}

double Animal::GetDistance(Animal& animal1, Animal& animal2)const
{
	return fabs(animal1.m_positionY - animal2.m_positionY);
}

bool Animal::CanEat(Animal& animal1, Animal& animal2)const 
{
	if (animal1.m_id != animal2.m_id) // Ne se mange pas lui-même
	{
		if (animal1.m_isCarnivore && !animal2.m_isCarnivore) // Carnivore VS Herbivore
		{
			if (animal1.m_weight > animal2.m_weight) // Plus gros
			{
				return true;
			}
		}
		else if (animal1.m_isCarnivore && animal2.m_isCarnivore) // Carnivore VS Carnivore
		{
			if (animal1.m_weight > animal2.m_weight) // Plus gros
			{
				return true;
			}
			else // Plus mince
			{
				return false;
			}
		}
		else 
		{
			return false;
		}
	}
}

void Animal::Eat(Animal& animalEating, Animal& animalEaten)
{
	if (animalEating.CanEat) 
	{
		animalEating.m_weight += animalEaten.m_weight;
		delete[animalEaten]; // ?
		animalEaten.~Animal(); // ?
	}
}

Bird::Bird() 
{
	
}

void Bird::SetIsBird() 
{
	m_isBird = true;
}

Bird::~Bird()
{

}

Fish::Fish() 
{
	
}

void Fish::SetIsFish() 
{
	m_isFish = true;
}

Fish::~Fish()
{

}

Eagle::Eagle()
{
	m_type = aigle;
}

void Eagle::SetIsCarnivore()
{
	m_isCarnivore = true;
}

Eagle::~Eagle()
{

}

Shark::Shark()
{
	m_type = requin;
}

void Shark::SetIsCarnivore()
{
	m_isCarnivore = true;
}

Shark::~Shark()
{

}

Swan::Swan()
{
	m_type = cygne;
}

Swan::~Swan()
{

}