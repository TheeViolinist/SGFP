#ifndef DATA_H
#define DATA_H

class Data {
	public:
		/* CONSTRUTORES */
		Data();
		Data(int, int, int);
		
		/* GET */
		int getDia() const;
		int getMes() const;
		int getAno() const;
		
		/* SET */
		void setMes(int);
		void setDia(int);
		void setAno(int);
		
		/* ESPECIFICAÇÕES */ 
		int getQuantidadeDiaMes(int) const;
		void exibeData() const;

		/* Função comparaDatas */

		bool comparaDatas(const Data &, const Data &);
	private:
		int dia;
		int mes;
		int ano;
};

#endif
