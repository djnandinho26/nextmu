#ifndef __T_PARTICLE_EFFECT_V7_H__
#define __T_PARTICLE_EFFECT_V7_H__

#pragma once

#include "t_particle_base.h"

class TParticleEffectV7 : public TParticle::Template
{
public:
	TParticleEffectV7();
public:
	virtual void Initialize() override;
	virtual void Create(TParticle::EnttRegistry &registry, const NParticleData &data) override;
	virtual TParticle::EnttIterator Move(TParticle::EnttRegistry &registry, TParticle::EnttView &view, TParticle::EnttIterator iter, TParticle::EnttIterator last) override;
	virtual TParticle::EnttIterator Action(TParticle::EnttRegistry &registry, TParticle::EnttView &view, TParticle::EnttIterator iter, TParticle::EnttIterator last) override;
	virtual TParticle::EnttIterator Render(TParticle::EnttRegistry &registry, TParticle::EnttView &view, TParticle::EnttIterator iter, TParticle::EnttIterator last, TParticle::NRenderBuffer &renderBuffer) override;
	virtual void RenderGroup(const TParticle::NRenderGroup &renderGroup, TParticle::NRenderBuffer &renderBuffer) override;
};

#endif