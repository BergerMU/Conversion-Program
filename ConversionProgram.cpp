//conversion program

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //Declaring Variables
    string userInput1;
    double userInput2;
    double temp;

    //Introduction Sequence
    cout<<"Conversion Program - Berger"<<endl;
    cout<<"---------------------------"<<endl;

    //Main loop
    while (userInput1 != "quit") {
        cout<<"Do you want to convert weight, temp, distance, or to quit? "<<endl;
        cin>>userInput1;

        //Weight Conversion
        if (userInput1 == "weight") {
            cout<<"Do you want to convert to pounds to kilograms? ";
            cin>>userInput1;

            //Convert to Pounds
            if (userInput1 == "pounds") {
                cout<<"Enter amount of kilograms: ";
                cin>>userInput2;
                userInput2 *= 2.205;
                cout<<userInput2<<" Pounds"<<endl;
            }

            //Convert to Kilograms
            else if (userInput1 == "kilograms") {
                cout<<"Enter amount of pounds: ";
                cin>>userInput2;
                userInput2 /= 2.205;
                cout<<userInput2<<" Kilograms"<<endl;
            }
        }

        //Temperature Conversion
        else if (userInput1 == "temp") {
            cout<<"Do you want to convert to fahrenheit or celsius"<<endl;
            cin>>userInput1;

            //Fahrenheit Conversion
            if (userInput1 == "fahrenheit") {
                cout<<"Enter amount of degrees in celsius: ";
                cin>>userInput2;
                userInput2 = (userInput2 * (9.0/5.0)) + 32;
                cout<<userInput2<<" Degrees fahrenheit"<<endl;
        }

            //Celsius Conversion
            else if (userInput1 == "celsius") {
                cout<<"Enter amount of degrees in fahrenheit: ";
                cin>>userInput2;
                userInput2 = (userInput2 - 32) * (5.0/9.0);
                cout<<userInput2<<" Degrees celsius"<<endl;
            }
        }

        //Distance conversion
        else if (userInput1 == "distance") {
            cout<<"Do you want to convert to centimeters, inches, feet, miles, or kilometers?"<<endl;
            cin>>userInput1;

            //Converting to Centimeters
            if (userInput1 == "centimeters") {
                cout<<"Are you converting from inches, feet, miles or kilometers?"<<endl;
                cin>>userInput1;

                //From Inches
                if (userInput1 == "inches") {
                    cout<<"Enter amount of inches: ";
                    cin>>userInput2;
                    userInput2 *= 2.54;
                    cout<<userInput2<<" Centimeters"<<endl;
                }

                //From Feet
                else if (userInput1 == "feet") {
                    cout<<"Any additional inches (yes/no)?"<<endl;
                    cin>>userInput1;

                    //With additional inches
                    if (userInput1 == "yes") {
                        cout<<"Enter amount of feet: "<<endl;
                        cin>>userInput2;
                        temp = userInput2 * 30.48;
                        cout<<"Enter amount of inches: "<<endl;
                        cin>>userInput2;
                        temp += userInput2 * 2.54;
                        cout<<temp<<" Centimeters"<<endl;
                    }

                    //Without additional inches
                    else if (userInput1 == "no") {
                        cout<<"Enter amount of feet: "<<endl;
                        cin>>userInput2;
                        userInput2 *= 30.48;
                        cout<<userInput2<<" Centimeters"<<endl;
                    }
                }

                //From Miles
                else if (userInput1 == "miles") {
                    cout<<"Enter amount of miles: ";
                    cin>>userInput2;
                    userInput2 *= 160900.00;
                    cout<<userInput2<<" Centimeters"<<endl;
                }

                //From Kilometers
                else if (userInput1 == "kilometers") {
                    cout<<"Enter amount of kilometers: ";
                    cin>>userInput2;
                    userInput2 *= 100000;
                    cout<<userInput2<<" Centimeters"<<endl;
                }
            }

            //Converting to Inches
            else if (userInput1 == "inches") {
                cout<<"Are you converting from centimeters, feet, miles or kilometers?"<<endl;
                cin>>userInput1;

                //From Centimeters
                if (userInput1 == "centimeters") {
                    cout<<"Enter amount of centimeters: ";
                    cin>>userInput2;
                    userInput2 /= 2.54;
                    cout<<userInput2<<" Inches"<<endl;
                }

                //From Feet
                else if (userInput1 == "feet") {
                    cout<<"Enter amount of feet: "<<endl;
                    cin>>userInput2;
                    userInput2 *= 12;
                    cout<<userInput2<<" Inches"<<endl;
                    
                }

                //From Miles
                else if (userInput1 == "miles") {
                    cout<<"Enter amount of miles: ";
                    cin>>userInput2;
                    userInput2 *= 63360;
                    cout<<userInput2<<" Inches"<<endl;
                }

                //From Kilometers
                else if (userInput1 == "kilometers") {
                    cout<<"Enter amount of kilometers: ";
                    cin>>userInput2;
                    userInput2 *= 39370;
                    cout<<userInput2<<" Inches"<<endl;
                }
            }

            //Converting to Feet
            else if (userInput1 == "feet") {
                cout<<"Are you converting from centimeters, inches, miles or kilometers?"<<endl;
                cin>>userInput1;

                //From Centimeters
                if (userInput1 == "centimeters") {
                    cout<<"Enter amount of centimeters: ";
                    cin>>userInput2;
                    userInput2 /= 30.48;
                    cout<<userInput2<<" Feet"<<endl;
                }

                //From Inches
                else if (userInput1 == "inches") {
                    cout<<"Enter amount of inches: "<<endl;
                    cin>>userInput2;
                    userInput2 /= 12;
                    cout<<userInput2<<" Feet"<<endl;
                    
                }

                //From Miles
                else if (userInput1 == "miles") {
                    cout<<"Enter amount of miles: ";
                    cin>>userInput2;
                    userInput2 *= 5280;
                    cout<<userInput2<<" Feet"<<endl;
                }

                //From Kilometers
                else if (userInput1 == "kilometers") {
                    cout<<"Enter amount of kilometers: ";
                    cin>>userInput2;
                    userInput2 *= 3281;
                    cout<<userInput2<<" Feet"<<endl;
                }
            }

            //Converting to Miles
            else if (userInput1 == "miles") {
                cout<<"Are you converting from centimeters, inches, feet or kilometers?"<<endl;
                cin>>userInput1;

                //From Centimeters
                if (userInput1 == "centimeters") {
                    cout<<"Enter amount of centimeters: ";
                    cin>>userInput2;
                    userInput2 /= 160900.00;
                    cout<<userInput2<<" Miles"<<endl;
                }
                
                //From Inches
                else if (userInput1 == "inches") {
                    cout<<"Enter amount of inches: ";
                    cin>>userInput2;
                    userInput2 /= 63360;
                    cout<<userInput2<<" Miles"<<endl;
                }

                //From Feet
                else if (userInput1 == "feet") {
                    cout<<"Any additional inches (yes/no)?"<<endl;
                    cin>>userInput1;

                    //With additional inches
                    if (userInput1 == "yes") {
                        cout<<"Enter amount of feet: "<<endl;
                        cin>>userInput2;
                        temp = userInput2 / 5280;
                        cout<<"Enter amount of inches: "<<endl;
                        cin>>userInput2;
                        temp += userInput2 / 63360;
                        cout<<temp<<" Miles"<<endl;
                    }

                    //Without additional inches
                    else if (userInput1 == "no") {
                        cout<<"Enter amount of feet: "<<endl;
                        cin>>userInput2;
                        userInput2 /= 5280;
                        cout<<userInput2<<" Miles"<<endl;
                    }
                }

                //From Kilometers
                else if (userInput1 == "kilometers") {
                    cout<<"Enter amount of kilometers: ";
                    cin>>userInput2;
                    userInput2 /= 1.609;
                    cout<<userInput2<<" Miles"<<endl;
                }
            }

            //Converting to Kilometers
            else if (userInput1 == "kilometers") {
                cout<<"Are you converting from centimeters, inches, feet, or miles?"<<endl;
                cin>>userInput1;

                //From Centimeters
                if (userInput1 == "centimeters") {
                    cout<<"Enter amount of centimeters: ";
                    cin>>userInput2;
                    userInput2 /= 100000;
                    cout<<userInput2<<" Kilometers"<<endl;
                }

                //From Inches
                if (userInput1 == "inches") {
                    cout<<"Enter amount of inches: ";
                    cin>>userInput2;
                    userInput2 /= 39370;
                    cout<<userInput2<<" Kilometers"<<endl;
                }

                //From Feet
                else if (userInput1 == "feet") {
                    cout<<"Any additional inches (yes/no)?"<<endl;
                    cin>>userInput1;

                    //With additional inches
                    if (userInput1 == "yes") {
                        cout<<"Enter amount of feet: ";
                        cin>>userInput2;
                        temp = userInput2 / 3281;
                        cout<<"Enter amount of inches: ";
                        cin>>userInput2;
                        temp += userInput2 /= 39370;
                        cout<<temp<<" Kilometers"<<endl;
                    }

                    //Without additional inches
                    else if (userInput1 == "no") {
                        cout<<"Enter amount of feet: ";
                        cin>>userInput2;
                        userInput2 /= 3281;
                        cout<<userInput2<<" Kilometers"<<endl;
                    }
                }

                //From Miles
                else if (userInput1 == "miles") {
                    cout<<"Enter amount of miles: ";
                    cin>>userInput2;
                    userInput2 *= 1.609;
                    cout<<userInput2<<" Kilometers"<<endl;
                }
            }
        }
    }
}