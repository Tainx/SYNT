#include "ParticleEmitter.h"

class SmokeEmitter : public ParticleEmitter
{
public:
    SmokeEmitter();
    virtual void EmitParticle(Particle& particle);
    virtual void DebugRender();

    float MinimumRadius;
    float MaximumRadius;

    float MinInclination;
    float MaxInclination;

    float MinAzimuth;
    float MaxAzimuth;

    float MinSpeed;
    float MaxSpeed;

    float MinLifetime;
    float MaxLifetime;

    glm::vec3 Origin;
    
private: 
    void RenderSphere(glm::vec4 color, float fRadius);
};
