#ifndef DARDO_H
#define DARDO_H
#include "objeto.h"

class dardo_t : public objeto_t{
	private:
		bool control = true;
		bool shot = false;
	public:
		dardo_t() = default;
		~dardo_t() = default;
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
		void set_direccion(int d);
		void shoot(int x_, int y_, int dir, std::vector<std::vector<char>>& mapa);
		bool disparar();
		bool get_control();
};

#endif