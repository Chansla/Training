#pragma once
class Game
{
public:
	virtual void play() = 0;
};


class Snake :public Game 
{
public:
	void play();
};

class Tetris :public Game
{
public:
	void play();
};

