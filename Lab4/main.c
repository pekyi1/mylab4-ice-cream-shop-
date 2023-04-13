#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order = 0;
    int time = 0;
    float cost = 0;
    int toppings = 0;
    float largeSizeCost [] ={8.0, 8.0,9.0,10.0};
    float smallSizeCost [] ={5.0, 5.0,6.0,7.0};

    printf("WELCOME TO FIIFI'S ICE CREAM SHOP\nWhat would you like to order?\n");
     int flavour =0, topping = 0, size = 0;
     do{
        //flavour = (1,2,3,4,5);
        //size =(1,2);

        printf("FLAVORS\t\t\tSMALL\t\tLARGE\n");
        printf("1 - Vanilla\t\tGHS 5\t\tGHS 8\n2 - Strawberry\t\tGHS 5\t\tGHS 8 \n3 -"
               " Chocolate\t\tGHS 6\t\tGHS 9 \n4 - Mango\t\tGHS 7\t\tGHS 10 \n5 - Enquiries\n\n");
        printf("1 - Vanilla\n2 - Strawberry \n3 -"
               " Chocolate\n4 - Mango\n5 - Enquiries\n");




        //User is allowed to select the flavor of their choice and...
        // other manipulation are done
        scanf("%d", &flavour);
        printf("\nUser entered :%d\n", flavour);
        //Switch statement being used to decide when user chooses flavour
        switch(flavour){
        case 1:
            printf("flavor %d -  vanilla\n", flavour);
        break;
        case 2:
            printf("flavor %d -  Strawberry\n", flavour);
        break;
        case 3:
            printf("flavor %d - Chocolate\n", flavour);
        break;
        case 4:
            printf("flavor %d - Mango\n", flavour);
        break;
        case 5:
            printf("A customer service agent will be with you soon");
        break;
        default:
            printf("Invalid flavour entry\n");
        }

        //User is allowed to select size of meal and other manipulations are done
        printf("The sizes are :\n1 - small\n2 - large\n");
        scanf("%d", &size);
        printf("\nUser entered :%d\n", size);
        //Switch statement being used to decide when user enters the size
        //Here since the time of waiting is directly affecting the the size...
        //we add the waiting time statements right away

        switch(size){
        case 1:
            printf("size %d - small\n", size);
            time += 2;
            printf("\nWaiting time: %dmins\n", time);
        break;
        case 2:
            printf("size %d - large\n", size);
            time += 3;
            printf("\nWaiting time: %dmins\n", time);
        break;
        default:
            printf("Invalid size entry\n");
            break;
        }
        //The plenty if else statements were used because I had no way
        // of checking for both flavor and size at once in the switch statement
        if(flavour ==1 && size == 1){
            cost += smallSizeCost[0];
            printf("\nCost: %.2f\n", cost);
        }
        else if(flavour ==1 && size ==2){
            cost += largeSizeCost[0];
            printf("Cost: GHS %.2f\n", cost);
        }
        else if(flavour ==2 && size ==1){
            cost +=smallSizeCost[1];
            printf("Cost: GHS %.2f\n", cost);
        }
        else if(flavour ==2 && size ==2){
            cost +=largeSizeCost[1];
            printf("Cost: GHS %.2f\n", cost);
        }
        else if(flavour ==3 && size ==1){
            cost +=smallSizeCost[2];
            printf("Cost: GHS %.2f\n", cost);
        }
        else if(flavour ==3 && size ==2){
            cost +=largeSizeCost[2];
            printf("Cost: GHS %.2f\n", cost);
        }
        else if(flavour ==4 && size ==1){
            cost +=smallSizeCost[3];
            printf("Cost: GHS %.2f\n", cost);
        }
        else if(flavour ==4 && size ==2){
            cost +=largeSizeCost[3];
            printf("Cost: GHS %.2f\n", cost);
        }


     do{
        int topping;
        printf("\nTOPPINGS\n");
        printf("1. Sprinkles - GHS 2\n2. Whipped cream - GHS 3\n3."
               " Chopped nuts - GHS 4\n4. Coconut shavings - GHS 5\n");
          // Allowing user to enter toppings
          printf("You press 5 if you finish your order\n");
         printf("Select your topping :\n");
         scanf("%d", &topping);

         float toppingCost [] = {2,3,4,5};
         int toppingTime; // in mins
         //char topping [] ={"Sprinkles", "Whipped cream","Chopped nuts", "Coconut shapings"};
         if(topping == 1){
            printf("Your selected topping is Sprinkles\n");
                cost += toppingCost[0];
                toppingTime = 2; // Add 2 more mins
                printf("Waiting time for topping = %dmins\n", toppingTime);
                time = time + toppingTime; // Add two more minutes
                printf("Cost after topping = GHS %f "
                       "\nTotal waiting time = %d mins\n",cost, time );
                toppings++;
         }
         else if(topping == 2){
            printf("Your selected topping is Whipped cream\n");
                cost += toppingCost[1];
                toppingTime = 1; // Add 1 more minutes
                printf("Waiting time for topping = %dmins\n", toppingTime);
               time = time + toppingTime;
                printf("Total Cost after topping = GHS %f "
                       "\nTotal waiting time = %d mins\n",cost, time );
                toppings++;
         }
         else if(topping == 3){
            printf("Your selected topping is Chipped nuts\n");
                cost += toppingCost[2];
                toppingTime = 3;
                printf("Waiting time for topping = %dmins\n", toppingTime);
               time = time + toppingTime;
                printf("Total Cost after topping = GHS %f "
                       "\nTotal waiting time = %d mins\n",cost, time );
                toppings++;
         }
          else if(topping == 4){
            printf("Your selected topping is Coconut shavings\n");
                cost += toppingCost[3];
               toppingTime = 4; // Add 4 more minutes
                printf("Waiting time for topping = %dmins\n", toppingTime);
               time = time + toppingTime;
                printf("Total Cost after topping = GHS %f "
                       "\nTotal waiting time = %d mins\n",cost, time );
                toppings++;
          }
            else if(topping == 5){
                toppings = 0;
            }
            else{
                    printf("Invalid topping entry\n");
                    break;
            }
    }
     while(toppings > 0);

     int userDecision;
     printf("Would you like anything else?\n1 - Yes\n2 - No\n"); // user decides whether to add anything to order
     scanf("%d", &userDecision);

     if(userDecision == 1){
        order++;
     }
     else if(userDecision == 2){
        order = 0;
        printf("Total Cost after topping = GHS %f "
                       "\nTotal waiting time = %d mins\n",cost, time );
     }
     else printf("Invalid input");
     }
    while(order > 0); //END OF Q1 TO Q4
     //Q5
    printf("Kindly wait for your order.\n");
    //Q6
    /*
    Displaying the decrement in the waiting time to order to zero
    ie. time for one to receive his order after request
    */
    int i;
    printf("Waiting time : \n");
    for(i = 0; (i <= time * 60); i++)
    {

        time--;
        printf("%d\n", time); // If you print b4 decrement you won't get the 0 mins.
    }
    //Using the while loop alternative for the time remaining
    /*printf("Waiting time remaining : \n");
    while((time*60) > 0){
        time--;
        printf("%d\n", time);
    }
*/
    //Q7
    printf("Here's your order\nThanks for coming to Fiifi's Ice Cream Shop.\n");
    return 0;
}


