// Overload the * operator to multiply two Matrix objects(define a simple matrix class with a 2D array)
#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
public:
    Matrix(const vector<vector<int>> &data) : data(data)
    {
        rows = data.size();
        cols = data[0].size();
    }

    Matrix operator*(const Matrix &other) const
    {
        if (cols != other.rows)
        {
            throw invalid_argument("Cannot multiply matrices: incompatible dimensions.");
        }

        vector<vector<int>> result(rows, vector<int>(other.cols, 0));

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < other.cols; ++j)
            {
                for (int k = 0; k < cols; ++k)
                {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return Matrix(result);
    }

    void print() const
    {
        for (const auto &row : data)
        {
            for (int val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

private:
    vector<vector<int>> data;
    int rows;
    int cols;
};

int main()
{
    vector<vector<int>> data1 = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> data2 = {{7, 8}, {9, 10}, {11, 12}};

    Matrix mat1(data1);
    Matrix mat2(data2);

    try
    {
        Matrix result = mat1 * mat2;
        result.print();
    }
    catch (const invalid_argument &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
