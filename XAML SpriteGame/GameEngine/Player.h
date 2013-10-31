
#pragma once
#include "GameObject.h"
using namespace Coding4Fun::FallFury::DXCore;
using namespace Coding4Fun::FallFury::DXCore::BasicSprites;


class Player :public GameObject
{
	int keys_down;
	float lightUpdate;
	float2 TargetPos;
public:

	Microsoft::WRL::ComPtr<ID3D11Texture2D> spot_texture;
	float lightAngle;
	Player();
	void Update(float timeDelta);
	void KeepInBounds();
	void ProcessKeyDown(Windows::UI::Xaml::Input::KeyRoutedEventArgs^ args);
	void ProcessKeyUp(Windows::UI::Xaml::Input::KeyRoutedEventArgs^ args);
	void ProcessPointerPressed(Windows::UI::Input::PointerPoint^ pt);
	void ProcessPointerReleased(Windows::UI::Input::PointerPoint^ pt);
	void ProcessPointerMoved(Windows::UI::Input::PointerPoint^ pt);
	void Player::Draw(BasicSprites::SpriteBatch^ m_spriteBatch);

};