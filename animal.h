#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal 
{
public:
	enum
	{
		requin = 1,
		aigle,
		cygne,
	};
	Animal(int weight, int posY, int id);
	virtual ~Animal();
	void MoveToSea(int distToSea, Animal& animalToMove);
	double GetDistance(Animal& animal1, Animal& animal2)const;
	bool CanEat(Animal& animal1, Animal& animal2)const; //revoir ac Eat
	void Eat(Animal& animalEating, Animal& animalEaten);

	virtual bool IsBird() { return false; } // Sera appelé dans l'elem enfant
	virtual bool IsFish() { return false; } // Sera appelé dans l'elem enfant
	virtual bool IsCarnivore() { return false; } // Sera appelé dans l'elem enfant

protected:
	int m_type;
	int m_id;
	int m_weight;
	int m_positionY;
};

class Bird : public Animal
{
public:
	Bird();
	virtual ~Bird();
	virtual bool IsBird() { return true; }

protected:

};

class Fish : public Animal
{
public:
	Fish();
	virtual ~Fish();
	virtual bool IsFish() { return true; }

protected:

};

class Eagle : public Bird
{
public:
	Eagle();
	virtual ~Eagle();
	void SetIsCarnivore();

protected:

};

class Shark : public Fish
{
public:
	Shark();
	virtual ~Shark();
	void SetIsCarnivore();

protected:

};

class Swan : public Bird
{
public:
	Swan();
	virtual ~Swan();

protected:

};
