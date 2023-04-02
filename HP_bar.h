#pragma once
#include "settings.h"
class HpBar {
private: sf::RectangleShape frame;
	   sf::RectangleShape hpBar; 
	   float hpBarWidth;
public: HpBar() {
	hpBar.setSize(sf::Vector2f{ FRAME_WIDTH, FRAME_HEIGHT });  
	hpBar.setFillColor(sf::Color::Green);
	hpBar.setPosition(sf::Vector2f{ 5.f,5.f }); 
	frame.setSize(sf::Vector2f{ FRAME_WIDTH, FRAME_HEIGHT });
	frame.setOutlineColor(sf::Color::White); 
	frame.setPosition(sf::Vector2f{ 5.f,5.f });
} void update(int playerHp) {
	hpBarWidth = playerHp / 100.f * FRAME_WIDTH; 
	hpBar.setSize(sf::Vector2f{ FRAME_WIDTH,hpBarWidth });
} void draw(sf::RenderWindow& window, int PlayerHp) {
	window.draw(hpBar);
}
};