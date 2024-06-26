#include "Apple.h"
#include <Source/GameObject.h>
#include <Source/Time.h>
#include <iostream>
#include <Source/Window.h>

Apple::Apple(GameObject* owner) : Component(owner)
{
}

void Apple::Update()
{
	GetOwner()->Position.y -= GRAVITY * Time::GetDeltaTime();
	if (GetOwner()->Position.y < -Window::WindowHeight)
	{
		GetOwner()->Destroy();
	}
}
