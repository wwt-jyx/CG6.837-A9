#include "vectors.h"

class Particle;
class Generator{
public:
    Generator(){}
    // initialization
    void SetColors(Vec3f color, Vec3f dead_color, float color_randomness);
    void SetLifespan(float lifespan, float lifespan_randomness, int desired_num_particles);
    void SetMass(float mass, float mass_randomness);

    // on each timestep, create some particles
    int numNewParticles(float current_time, float dt) const;
    Particle* Generate(float current_time, int i);

    // for the gui
    void Paint() const;
    void Restart();

};

class HoseGenerator :public Generator{
public:
    HoseGenerator(Vec3f position, float position_randomness, Vec3f velocity, float velocity_randomness){

    }

};

class RingGenerator :public Generator{
public:
    RingGenerator(float position_randomness, Vec3f velocity, float velocity_randomness){

    }

};