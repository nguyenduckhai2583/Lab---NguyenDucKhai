#include <iostream>

using namespace std;

class matrix
{
	private:
		int row;
		int col;
		float** data;
	
	public:
		matrix()
		{
			this->row = this->col = 0;
			data = new float *[this->row];
			for (int i = 0; i < this->row; i++)
			{
				data[i] = new float [this->col];
			}
		}
		
		matrix(int a, int b)
		{
			this->row = a;
			this->col = b;
			data = new float *[row];
			for(int i = 0 ; i < row; i ++)
			{
				data[i] = new float [col];
			}
		}	

		void nhap()
		{
			for (int i = 0; i < row; i++){
				for (int j = 0; j < col;j++){
					cout <<"Enter value for data ["<<i<<"]["<<j<<"]";
					cin >> data[i][j];
				}
			}
			cout << endl;
		}
		
		matrix(const matrix &a)
		{
			this->col = a.col;
			this->row = a.row;
			for(int i = 0; i < row; i++){
				for(int j = 0; j < col; j++)
					this->data[i][j] = a.data[i][j];
			}
		}
		
		matrix operator+(matrix &a)
		{	
			matrix temp(row, col);
			for(int i = 0; i < row; i++){
				for(int j = 0; j < col; j++){
					temp.data[i][j] = this->data[i][j] + a.data[i][j];
				}
			}
			return temp;
		}
		
		matrix operator-(matrix &a)
		{
			matrix temp(row, col);
				for(int i = 0; i < row; i++){
				for(int j = 0; j < col; j++){
					temp.data[i][j] = this->data[i][j] - a.data[i][j];
				}
			}
			return temp;
		}
		
		bool operator==(matrix &a)
		{
			if((!checkRC(*this, a)))
				return false;
			if(checkRC(*this, a))
				{
					if (this->row == this->col == a.row == a.col == 0)
						return true;
					else
					{
						for(int i = 0; i < row; i++){
							for(int j = 0; j < col; j++){
								if(this->data[i][j] != a.data[i][j])
									return false;
							}
						}
					}
				}
			return true;					
		}
		
		
		
		void display()
		{
			cout <<"Matrix:" << endl;
			for (int i = 0; i < row; i++){
				for (int j = 0; j < col;j++){		
					cout << data[i][j] << " ";
				if (j == col-1)
					cout << endl;
				}
			}
			cout <<endl;
		}
		
		friend bool checkRC(matrix &a, matrix &b);
		
};

	bool checkRC (matrix &a, matrix &b)
	{
		if (a.row == b.row && a.col == b.col)
			return true;
		else
			return false;
	}

main()
{	
//Check row column and operator ==
	matrix k(2, 3);
	matrix h(2, 2);
	matrix congg;
		
		if (checkRC(k, h))
			cout <<"RC equal" <<endl;
			else
			cout << "RC not equal" <<endl;
	
		if (k == h)
			cout <<"Matrix Equal" << endl;
			else
			cout <<"Matrix Not equal" << endl;

		if (k == h)
		{
			congg = k + h;
			congg.display();
		}
		else
		{
			cout << "Different row and column, can not plus matrix" <<endl;
		}

	// Test operator +, -, copy
	matrix m(2, 2);
	matrix n(2, 2);
	m.nhap();
	n.nhap();
	
	cout <<"copy"<<endl;
	matrix a;
	a = m;
	a.display();
	
	cout <<"cong" <<endl;
	matrix cong;
	cong = n + m;
	cong.display();
	
	cout <<"tru"<<endl;
	matrix tru;
	tru = n - m;
	tru.display();
	
}
