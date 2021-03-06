#pragma once
//
//  PZZombieBase.h
//  Project: Z
//
//  Copyright 2018 by �berpixel. All rights reserved.
//  Unauthorized use is punishable by torture, mutilation, and vivisection.
//

#ifndef __PROJECT_Z_ZOMBIEBASE_H_
#define __PROJECT_Z_ZOMBIEBASE_H_

#include <Rayne.h>
#include <RNRecastAgent.h>

namespace PZ
{
	class ZombieBase : public RN::SceneNode
	{
	public:
		ZombieBase();
		~ZombieBase();

		void Update(float delta) override;

	private:
		RN::Entity *_zombie;
		RN::RecastAgent *_navigationAgent;
		RN::Vector3 _previousPosition;
		//		RN::PhysXKinematicController *_controller;

		bool _following;
		float _followTime;
		RN::Vector3 _spawnPoint;
		bool _storeSpawnPoint;
	};
}

#endif /* defined(__PROJECT_Z_ZOMBIE_H_) */
