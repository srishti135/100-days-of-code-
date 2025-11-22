//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int input_light;
    printf("Enter traffic light color (0 for RED,1 for YELLOW,2 for GREEN): ");
    scanf("%d", &input_light);  
    enum TrafficLight light = (enum TrafficLight)input_light;
        switch (light) {
            case RED:
                printf("Stop\n");
                break;
            case YELLOW:
                printf("Wait\n");
                break;
            case GREEN:
                printf("Go\n");
                break;
        }
    }