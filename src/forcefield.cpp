#include "forcefield.h"

Vec3f GravityForceField::getAcceleration(const Vec3f &position, float mass, float t) const
{
    return Vec3f(0,0,0);
}

Vec3f ConstantForceField::getAcceleration(const Vec3f &position, float mass, float t) const
{
    return Vec3f(0,0,0);
}

Vec3f RadialForceField::getAcceleration(const Vec3f &position, float mass, float t) const
{
    return Vec3f(0,0,0);
}

Vec3f VerticalForceField::getAcceleration(const Vec3f &position, float mass, float t) const
{
    return Vec3f(0,0,0);
}

Vec3f WindForceField::getAcceleration(const Vec3f &position, float mass, float t) const
{
    return Vec3f(0,0,0);
}