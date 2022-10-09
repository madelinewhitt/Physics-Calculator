  #include<iostream>
  #include<cmath>
  #include"physics.h"
  using namespace std; 
  
   //Default constructor
    Physics::Physics()
    {
        xCoord = 0; 
        yCoord = 0;
        yIntercept = 0; 
        xMax = 0; 
        yMax = 0; 
    }

    //Getters
    const double Physics::getxMax() const
    {
        return xMax; 
    }

    const double Physics::getyMax() const
    {
        return yMax; 
    }

    const double Physics::getxCoord() const 
    {
        return xCoord; 
    }
    const double Physics::getyIntercept() const
    {
        return yIntercept; 
    }

    //Setters
    void Physics::setxCoord(double _x) 
    {
        xCoord = _x; 
    }
    void Physics::setyIntercept(double _y)
    {
        yIntercept = _y; 
    }
    void Physics::setxMax(double _xMax)
    {
        xMax = _xMax;
    }
    void Physics::setyMax(double _yMax) 
    {
        yMax = _yMax; 
    }

    //Mathematical Functions
    void Physics::FindPosition(int a)
    {
        double x; 
        x = pow(a, 2);
        yCoord = ((-4.905 * x) + yIntercept);
        cout << "(" << a << ", " << yCoord << ")"; 
    }

    double FindSpeed(double a)
    {
        double b = a; 
        b = -9.81 * b; 
        return b; 
    }

    double Physics::FindZero()
    {
        double zero; 
        zero = sqrt(yIntercept/4.905);
        return zero; 
    }

    void DisplayZero(Physics a) 
    {
        double zero; 
        double speed; 
        zero = a.FindZero();
        cout << "Ball hits the ground at (" << zero << ", 0)" << endl;
        cout << "Speed at this point in time: ";
        speed = FindSpeed(zero);
        cout << speed << "m/s" << endl;
    }

    //the display (FOR NOW... this is the vision):
    void DisplayTable(Physics a)
    {
        double MAX = a.FindZero();
        cout << "*****************************************************" << endl;
        cout << "* t *  Position   ***   Speed   ***  Acceleration ***" << endl;
        cout << "*****************************************************" << endl; 
        for(int i = 0; i < MAX; i++)
        {
            cout << "* " << i << " *    ";
            a.FindPosition(i);
            cout << "  *  " << FindSpeed(i) << " m/s *  9.81 m/s^2 *" << endl; 
            cout << "*****************************************************" << endl;

        }
    }
