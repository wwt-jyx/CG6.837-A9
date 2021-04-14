#include "generator.h"
// initialization
void Generator::SetColors(Vec3f color, Vec3f dead_color, float color_randomness)
{

}
void Generator::SetLifespan(float lifespan, float lifespan_randomness, int desired_num_particles)
{

}
void Generator::SetMass(float mass, float mass_randomness)
{

}

// on each timestep, create some particles
int Generator::numNewParticles(float current_time, float dt) const
{

}
Particle* Generator::Generate(float current_time, int i)
{

}

// for the gui
void Generator::Paint() const
{

}
void Generator::Restart()
{

}