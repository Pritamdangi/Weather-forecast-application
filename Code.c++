#include <iostream>
#include <string>
using namespace std;




string toLower(string str) {
    for (char &c : str) {
        c = tolower(c); // convert each character to lowercase
    }
    return str;
}





struct WeatherInfo {
    string city;
    float temperature;
    string condition;
};





int main() {
    WeatherInfo cities[] = {
        {"New Delhi", 32.5, "Sunny"},
        {"Mumbai", 29.0, "Rainy"},
        {"Bangalore", 25.0, "Cloudy"},
        {"Kolkata", 33.2, "Humid"},
        {"Chennai", 34.8, "Hot"},
        {"Hyderabad", 31.0, "Sunny"},
        {"Pune", 27.5, "Pleasant"},
        {"Ahmedabad", 35.2, "Hot"},
        {"Jaipur", 36.0, "Dry"},
        {"Lucknow", 33.5, "Humid"},
        {"Chandigarh", 30.3, "Clear"},
        {"Indore", 28.4, "Cloudy"},
        {"Bhopal", 29.8, "Partly Cloudy"},
        {"Goa", 26.9, "Rainy"},
        {"Patna", 34.1, "Sunny"}
    };
    
    
    
    
    int numCities = sizeof(cities) / sizeof(cities[0]);



    cout << "==== Weather App ====\n";
    
    for (int i = 0; i < numCities; i++) {
       
    }
    
    
    
    


    string inputCity;
    getline(cin, inputCity);  // Get full city name 
    
    
    

    bool found = false;
    for (int i = 0; i < numCities; i++) {
if (toLower(inputCity) == toLower(cities[i].city))
            cout << "\nWeather in " << cities[i].city << ":\n";
            cout << "Temperature: " << cities[i].temperature << "°C\n";
            cout << "Condition: " << cities[i].condition << endl;
            found = true;
            break;
        }
    }



    if (!found) {
        cout << "City not found.\n";
    }

    return 0;
}
