#ifndef OBJETO_H
#define OBJETO_H

#include <vector>
#include <iostream>

class objeto_t{
	protected:
		int x = 0;
		int y = 0;
		int direccion = 0; //1 : norte, 2 : este, 3 : sur, 4 : noreste;
		bool alive = true;
	public:
    //constructores
		objeto_t() = default;
		objeto_t(int x, int y, std::vector<std::vector<char>>& mapa);
    //metodos
		virtual void move(int dx, int dy, std::vector<std::vector<char>>& mapa) = 0;
    //getter
		virtual void set_posicion(int x_, int y_);
		virtual int get_x();
		virtual int get_y();
		virtual int get_direccion();
		virtual bool get_vida();
    //setters
		virtual void set_vida(bool state);
};

#endif
