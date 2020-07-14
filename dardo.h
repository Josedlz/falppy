#ifndef DARDO_H
#define DARDO_H
#include "entity.h"

class dardo_t : public entity_t{
	private:
		bool control = true;
		bool shot = false;
	public:
		dardo_t() = default;
		~dardo_t() = default;
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
		void shoot(int x_, int y_, int dir, std::vector<std::vector<char>>& mapa);
		bool get_shot();
		void set_shot(bool state);
		bool get_control();
};

#endif