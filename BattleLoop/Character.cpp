#include "Character.h"

Character::Character()
{
	m_health = 100;
	m_damage = 10;
}

Character::Character(float health, float damage)
{
	m_health = health;
	m_damage = damage;
}

void Character::attack(Character other)
{
	other.takeDamage(m_damage);
}

float Character::takeDamage(float damage)
{
	m_health -= damage;
	return damage;
	
}
