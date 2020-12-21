#ifndef JUGADOR_H
#define JUGADOR_H

#include "objeto.h"
#include "dardo.h"

class jugador_t : public objeto_t{
	private:
		std::vector<dardo_t> dardos;
		int ammo = 0;
	public:
		jugador_t() = default;
		jugador_t(int x, int y, std::vector<std::vector<char>>& mapa);
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
		std::vector<dardo_t>& get_dardos();
		bool get_control();
		void set_control(bool state);
		int get_ammo();
		void set_ammo(int a);
};

#endif