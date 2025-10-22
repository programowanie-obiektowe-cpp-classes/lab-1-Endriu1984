class Wektor2D
{
public:
    Wektor2D() : x(0.0), y(0.0) {}           // Konstruktor domyślny, wektor o wsp. [0, 0]
    Wektor2D(double locx, double locy) : x(locx), y(locy) {} // Wektor dostaje wspołrzędne x i y

    void setX(double locx)  {x = locx; }    // Piszę setter dla zmiennej typu double i zwracam wartość x
    double getX()    {return x; }
    void setY(double locy)  {y = locy; }
    double getY()    {return y; }

private:

    double x, y;

};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
    {
        return Wektor2D{v1.getX() + v2.getX(), v1.getY() + v2.getY()};
    }

double operator*(Wektor2D v1, Wektor2D v2)
    {
        return v1.getX() * v2.getX() + v1.getY() * v2.getY();
    }
