#include "vectors.h"

class Particle;
class ForceField;

class Integrator{
public:
    Integrator(){}
    virtual void Update(Particle *particle, ForceField *forcefield, float t, float dt) = 0;
    Vec3f getColor()
    {
        return Vec3f(0,0,0);
    }
};

class EulerIntegrator :public Integrator{
public:
    EulerIntegrator(){}
    void Update(Particle *particle, ForceField *forcefield, float t, float dt);

};
class MidpointIntegrator :public Integrator{
public:
    MidpointIntegrator(){}
    void Update(Particle *particle, ForceField *forcefield, float t, float dt);

};

class RungeKuttaIntegrator :public Integrator{
public:
    RungeKuttaIntegrator(){}
    void Update(Particle *particle, ForceField *forcefield, float t, float dt);

};