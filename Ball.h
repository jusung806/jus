#ifndef BALL_H
#define BALL_H
#include "Entity.h"

#include <math.h>

// Define a ball speed in pixels per second
const float BALL_SPEED = 550;

class Ball : public Entity {
public:
	Ball(SDL_Renderer* renderer);
	~Ball();

	void Update(float delta);
	void Render(float delta);

	void SetDirection(float dirx, float diry);

	float dirx, diry;

private:
	SDL_Texture* texture;

};

#endif