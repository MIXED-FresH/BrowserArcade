#include "Entity.h"

Position Entity::getPosition() const {
    return pos;
}

std::string Entity::getName() const {
    return name;
}

bool Entity::isCrossible() const {
    return crossAbility;
}

void Entity::setPosition(unsigned int X, unsigned int Y) {
    pos.X = X;
    pos.Y = Y;
}

void Entity::setPosition(Position &pos) {
    this->pos.X = pos.X;
    this->pos.Y = pos.Y;
}