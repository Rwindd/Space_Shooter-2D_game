
#pragma once

namesapce sydtr
{
	class State {

	public:
		virtual void Initialize() = 0;
		virtual void HandleInput() = 0;
		virtual void Update() = 0;
		virtual void draw(float dt) = 0;
		virtual void pause() {}
		virtual void resume() {}

};

}