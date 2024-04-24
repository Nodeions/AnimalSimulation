#include <iostream>
#include "animal.hpp"
#include <time.h>
#include <math.h>

Animal::Animal(int weight, int posY, enum typeAnimaux) // PAS SUR
{
	/*m_typeAnimal = 0;*/ // PAS SUR
	m_id = 0;
	m_weight = 0;
	m_positionY = 0;
	m_isFish = false;
	m_isBird = false;
	m_isCarnivore = false;
}

Animal::Animal() 
{
	/*m_typeAnimal = 0;*/ // PAS SUR
	m_id = 0;
	m_weight = 0;
	m_positionY = 0;
	m_isFish = false;
	m_isBird = false;
	m_isCarnivore = false;
}

Animal::~Animal() 
{

}

void Animal::MoveToSea(int distToSea, Animal animalToMove) 
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

double Animal::GetDistance(Animal animal1, Animal animal2)const
{
	return fabs(animal1.m_positionY - animal2.m_positionY);
}

void Animal::CanEat(Animal animal1, Animal animal2)const 
{
	if (animal1.m_id != animal2.m_id) // Ne se mange pas lui-même
	{
		if (animal1.m_isCarnivore && !animal2.m_isCarnivore) // Carnivore VS Herbivore
		{
			if (animal1.m_weight > animal2.m_weight) // Plus gros
			{
				animal1.m_weight += animal2.m_weight;
				animal1.Eat(animal2);
			}
		}
		else if (animal1.m_isCarnivore && animal2.m_isCarnivore) // Carnivore VS Carnivore
		{
			if (animal1.m_weight > animal2.m_weight) // Plus gros
			{
				animal1.m_weight += animal2.m_weight;
				animal1.Eat(animal2);
			}
			else // Plus mince
			{
				animal2.m_weight += animal1.m_weight;
				animal2.Eat(animal1);
			}
		}
	}
}

void Animal::Eat(Animal animalEaten) 
{
	animalEaten.~Animal();
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

}

Swan::~Swan()
{

}