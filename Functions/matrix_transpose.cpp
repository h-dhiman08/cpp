// this code is designed to transpose a matrix using a class and friend function which returns the object 
#include<iostream>

using namespace std;

//declaring a class Matrix
class Matrix {
private:
    int rows, cols;
public:
    int mat[10][10]; 
    void get(void);
    void display();
    friend Matrix transpose(Matrix m);
};

// Function to get the matrix input from the user
void Matrix::get(void) { 
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> mat[i][j];
        }
    }
}

// Function to display the matrix
void Matrix::display(){
    cout << "The matrix is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix transpose(Matrix m) {
    Matrix t;
    t.rows = m.cols; // Transpose rows become columns   
    t.cols = m.rows; // Transpose columns become rows
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            t.mat[j][i] = m.mat[i][j]; // Assigning transposed values
        }
    }
    return t;
}
int main(){
    Matrix m, t;
    m.get();

    cout << "Original Matrix: " << endl;
    m.display();


    t = transpose(m);
    cout << "Transposed Matrix: " << endl;
    t.display();
    cout << "Transpose completed successfully." << endl;
    return 0;
}