#pragma once
#include <iostream>
#include <string>

using namespace std;

//namespace TypeAnimaux 
//{
//	typedef enum 
//	{
//		requin,
//		aigle,
//		cygne
//	}TypeAnimaux;
//}

enum class typeAnimaux { // PAS SUR
		requin = 1,
		aigle = 2,
		cygne = 3
	};

enum class niveauxMer { // PAS SUR
	fond = -10, 
	surface = 0, 
	altitude = 10
};

class Animal 
{
public:
	Animal(); //Obligé d'initialiser un constructeur par defaut pour les elem enfants ?
	Animal(int weight, int posY, enum typeAnimaux); // PAS SUR de l'enum
	virtual ~Animal();
	void MoveToSea(int distToSea, Animal animalToMove);
	double GetDistance(Animal animal1, Animal animal2)const;
	void CanEat(Animal animal1, Animal animal2)const;
	void Eat(Animal animalEaten);

protected:
	//enum typeAnimal m_typeAnimal; // PAS SUR
	int m_id;
	int m_weight;
	int m_positionY;
	bool m_isFish;
	bool m_isBird;
	bool m_isCarnivore;
};

class Bird : public Animal
{
public:
	Bird();
	virtual ~Bird();
	void SetIsBird();

protected:

};

class Fish : public Animal
{
public:
	Fish();
	virtual ~Fish();
	void SetIsFish();

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
