#include <iostream>
#include <time.h>
using namespace std;

struct matrix
{
	int row, column;
	float **mat;

	void new_mat(int row, int column)
	{
		this->row = row;
		this->column = column;
		this->mat = new float *[row];
		for (int i = 0; i < row; i++)
		{
			mat[i] = new float[column];
		}
	}

	void gen_mat(float a, float b)
	{
		float max, min;
		if (a < b)
		{
			max = b;
			min = a;
		}
		else
		{
			max = a;
			min = b;
		}
		float range = max - min;
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				this->mat[i][j] = min + (float)rand() / (float)RAND_MAX*range;
			}
		}
	}
	void print_mat()
	{
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				cout << this->mat[i][j] << " ";
			}
			cout << "\n";
		}
	}

	int add_mat(matrix mat1, matrix mat2)
	{
		if (mat1.row == mat2.row && mat1.column == mat2.column)
		{
			this->new_mat(mat1.row, mat2.column);
			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < this->column; j++)
				{
					this->mat[i][j] = mat1.mat[i][j] + mat2.mat[i][j];
				}
			}
		}
		else
		{
			cout << "Nije ista velicina" << endl;
			return 0;
		}
	}
	int sub_mat(matrix mat1, matrix mat2)
	{
		if (mat1.row == mat2.row && mat1.column == mat2.column)
		{
			this->new_mat(mat1.row, mat2.column);
			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < this->column; j++)
				{
					this->mat[i][j] = mat1.mat[i][j] - mat2.mat[i][j];
				}
			}
		}
		else
		{
			cout << "Nije ista velicina" << endl;
			return 0;
		}

	}
	void tran_mat(matrix mat1)
	{
		this->new_mat(mat1.column, mat1.row);
		for (int i = 0; i < this->column; i++)
		{
			for (int j = 0; j < this->row; j++)
			{
				this->mat[j][i] = mat1.mat[i][j];
			}
		}

	}
	int multi_mat(matrix mat1, matrix mat2)
	{
		if (mat1.column != mat2.row)
		{
			cout << "Nije ista velicina" << endl;
			return 0;
		}
		float sum = 0;
		this->new_mat(mat1.row, mat2.column);

		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				for (int k = 0; k < this->row; k++)
				{
					sum += mat1.mat[i][k] * mat2.mat[k][j];

				}
				this->mat[i][j] = sum;
				sum = 0;

			}
		}

	}
	void del_mat()
	{
		for (int i = 0; i < this->row; i++)
		{
			delete[] mat[i];

		}
		delete[] mat;
	}
};

int main()
{
	srand((unsigned)time(NULL));
	float a, b, c, d;
	int m, n, x, y;
	cout << "Unesite velicinu mat1:" << endl;
	cin >> m >> n;
	cout << "Unesite raspon elemenata mat1:" << endl;
	cin >> a >> b;
	cout << "Unesite velicinu mat2:" << endl;
	cin >> x >> y;
	cout << "Unesite raspon elemenata mat2:" << endl;
	cin >> c >> d;

	matrix mat1, mat2, mat3;

	cout << "Mat1" << endl;
	mat1.new_mat(m, n);
	mat1.gen_mat(a, b);
	mat1.print_mat();
	cout << "Mat2" << endl;
	mat2.new_mat(x, y);
	mat2.gen_mat(c, d);
	mat2.print_mat();
	cout << "Zbrajanje matrica" << endl;
	mat3.add_mat(mat1, mat2);
	mat3.print_mat();
	cout << "Oduzimanje matrica" << endl;
	mat3.sub_mat(mat1, mat2);
	mat3.print_mat();
	cout << "Mnozenje matrica" << endl;
	mat3.multi_mat(mat1, mat2);
	mat3.print_mat();
	cout << "Transponiranje mat1" << endl;
	mat3.tran_mat(mat1);
	mat3.print_mat();
	mat1.del_mat();
	mat2.del_mat();
	mat3.del_mat();
}