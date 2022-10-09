class Physics {
    friend void DisplayTable(Physics); //Displays the table
    friend double FindSpeed(int); //finds the speed of the object at any given point
    friend void DisplayZero(Physics); //displays the speed and the position that the ball hits zero 


    public:
    //Default constructor
    Physics(); 

    //Getters
    const double getyIntercept() const; 
    const double getxCoord() const; 
    const double getxMax() const; 
    const double getyMax() const; 

    //Setters
    void setxCoord(double); 
    void setyIntercept(double); 
    void setxMax(double); 
    void setyMax(double); 

    //High Place Drop Calculations:
    void FindPosition(int); //Finds the position of the object at any given point 
    double FindZero(); //finds the bounds that we're calculating to

    private:
    double xMax;
    double yMax; 
    double yIntercept;
    double xCoord; 
    double yCoord;

};