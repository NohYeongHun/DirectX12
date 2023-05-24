#include "pch.h"
#include "Game.h"
#include "Engine.h"

void Game::Init()
{
	GEngine->Init(info);
}

void Game::Update()
{
	GEngine->Render();
}