#include "vectors.h"

class ForceField{
public:
    ForceField(){}
    virtual Vec3f getAcceleration(const Vec3f &position, float mass, float t) const = 0;
};

class GravityForceField :public ForceField{
public:
    GravityForceField(Vec3f gravity){

    }
    Vec3f getAcceleration(const Vec3f &position, float mass, float t) const;
};

class ConstantForceField :public ForceField{
public:
    ConstantForceField(Vec3f force){

    }
    Vec3f getAcceleration(const Vec3f &position, float mass, float t) const;


};

class RadialForceField :public ForceField{
public:
    RadialForceField(float magnitude){

    }
    Vec3f getAcceleration(const Vec3f &position, float mass, float t) const;
};

class VerticalForceField  :public ForceField{
public:
    VerticalForceField(float magnitude){

    }
    Vec3f getAcceleration(const Vec3f &position, float mass, float t) const;
};

class WindForceField  :public ForceField{
public:
    WindForceField(float magnitude){

    }
    Vec3f getAcceleration(const Vec3f &position, float mass, float t) const;
};