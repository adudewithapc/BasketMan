#include "Player.h"
#include <iostream>
#include <Source/GameObject.h>
#include <Source/Input/Keyboard.h>
#include <Source/Time.h>

PlayerMovement::PlayerMovement(GameObject* owner) : Component(owner)
{
}

void PlayerMovement::Update()
{
	Move();
}

void PlayerMovement::Move()
{
	float xMovement = Keyboard::IsKeyDown(Key::D) - Keyboard::IsKeyDown(Key::A);
	GetOwner()->Position.x += xMovement * SPEED * Time::GetDeltaTime();
}
