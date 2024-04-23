#pragma once
#include <iostream>
#include <string>

using namespace std;

class Altitude 
{
public:
	Altitude();
	virtual ~Altitude();
	void SetAltitude(int altitude);
	int GetAltitude();

protected:
	int altitudeHeight;
};

class Animal 
{
public:
	Animal();
	virtual ~Animal();

	void CanEat(bool isCanEat);
	void Eat(string name);

	void SetPosY(int posY);
	int GetPosY();

	void SetWeight(int weight);
	int GetWeight();

	void SetIsCanEat(bool isCanEat);
	bool GetIsCanEat();

	void SetName(string name);
	string GetName();

	int GetDistance();

	void MoveToSea();

protected:
	int posY;
	int distance;
	int weight;
	bool isCanEat;
	string name;
};

class Fish : public Animal 
{
public:
	void SetIsFish(bool isFish);
	bool GetIsFish();
	
protected:
	bool isFish;
};

class Bird : public Animal 
{
public:
	void SetIsBird(bool isBird);
	bool GetIsBird();

protected:
	bool isBird;
};

class Eagle : public Bird 
{
public:
	void SetIsCarnivore(bool isCarnivore);
	bool GetIsCarnivore();

protected:
	bool isCarnivore;
};

class Swan : public Bird 
{
public:
	void SetIsCarnivore(bool isCarnivore);
	bool GetIsCarnivore();

protected:
	bool isCarnivore;
};

class Shark : public Fish 
{
public:
	void SetIsCarnivore(bool isCarnivore);
	bool GetIsCarnivore();

protected:
	bool isCarnivore;
};
