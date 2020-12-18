#include "Character.h"

Character::Character()
{
	health = 100;
	damage = 10;
}

Character::Character(float health, float damage)
{
	health = health;
	damage = damage;
}

bool Character::getIsAlive()
{
	return health > 0;
}

void Character::attack(Character* other)
{
	other->takeDamage(damage);
}

float Character::takeDamage(float damage)
{
	health -= damage;
	return damage;
	
}
