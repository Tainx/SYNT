#pragma once

#include <glm/glm.hpp>
#include <vector>

struct Particle
{
    Particle() 
        : m_Position(0)
        , m_Velocity(0)
        , m_Color(0)
        , m_fRotate(0)
        , m_fAge(0)
        , m_fLifeTime(0)
        , m_Force(glm::vec3(0, 0, 0))
        , m_ClockRot(0)
    {
        
    }

    glm::vec3           m_Position; // Center point of particle
    glm::vec3           m_Velocity; // Current particle velocity
    glm::vec4           m_Color;    // Particle color
    float               m_fRotate;  // Rotate the particle the center
    float               m_fSize;    // Size of the particle
    float               m_fAge;
    float               m_fLifeTime;
    glm::vec3            m_Force;
    int                 m_ClockRot;
};

typedef std::vector<Particle> ParticleBuffer;
