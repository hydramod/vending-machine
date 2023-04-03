/* ********************************************************
*
* File Name: Vending_Machine.c
*
* Description: This program simulates a vending machine
*
* Programmer : Ali Saeid
*
* Date : 20/12/2020
*
* Version 1.0
*
******************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* *********************************************************
* Function Name : printTable
*
* Input Parameters : int stockMars, stock of Mars Chocolate bar
*                    int stockBounty, stock of Bounty Chocolate bar
*                    int stockCurlyWurly, stock of Curly Wurly Chocolate bar
*                    int stockToffeeCrisp, stock of Toffee Crisp Chocolate bar
*                    int stockDoubleDecker, stock of Double Decker Chocolate bar
*                    float priceMars, Price for 1 Mars Chocolate bar
*                    float priceBounty, Price for 1 Bounty Chocolate bar
*                    float priceCurlyWurly, Price for 1 Curly Wurly Chocolate bar
*                    float priceToffeeCrisp, Price for 1 Toffe Crisp bar
*                    float priceDoubleDecker, Price for 1 Doule Decker bar
*
* Returns : Prints Table Selection of Bars for sale with thier price
*
* Purpose of function : This function is to print the slection table
******************************************************** */

void printTable(int stockMars, int stockBounty, int stockCurlyWurly, int stockToffeeCrisp, int stockDoubleDecker,
                float priceMars, float priceBounty, float priceCurlyWurly, float priceToffeeCrisp, float priceDoubleDecker){
  char bars[5][15] = {"Mars","Bounty","Curly Wurly","Toffee Crisp","Double Decker"}; /*String Array of Chocolate bars */
  int column; /*Column Variable*/
  int row; /*Row Variable*/

  /*Printing table heading, Aesthtic purposes*/
  for(row=1; row<=1; row++){
    printf("***********************************************************************************************\n");
    printf("*                                     VENDING MACHINE                                         *\n");
    printf("***********************************************************************************************\n");
  }
  /*Prints the selection number for each bar*/
  for(row=1; row<=1; row++){
    printf("Selection\t");
    for(column=1; column<=5; column++){
      printf("A%-10d\t", column);
    }
    /*Prints each bar*/
    for(row=1; row<=1; row++){
      printf("\nBars\t\t");
      for(column=0; column<=4; column++){
        printf("%-12s\t", bars[column]);
      }
      /*Prints stock of each bar*/
      for(row=1; row<=1; row++){
        printf("\nStock\t\t");
        for(column=0; column<=0; column++){
          printf("%-10d\t", stockMars);
        }
        for(column=1; column<=1; column++){
          printf("%-10d\t", stockBounty);
        }
        for(column=2; column<=2; column++){
          printf("%-10d\t", stockCurlyWurly);
        }
        for(column=3; column<=3; column++){
          printf("%-10d\t", stockToffeeCrisp);
        }
        for(column=4; column<=4; column++){
          printf("%-10d\t", stockDoubleDecker);
        }
        /*Print price for each bar*/
        for(row=1; row<=1; row++){
          printf("\nPrice\t\t");
          for(column=0; column<=0; column++){
            printf("%-10.2f\t", priceMars);
          }
          for(column=1; column<=1; column++){
            printf("%-10.2f\t", priceBounty);
          }
          for(column=2; column<=2; column++){
            printf("%-10.2f\t", priceCurlyWurly);
          }
          for(column=3; column<=3; column++){
            printf("%-10.2f\t", priceToffeeCrisp);
          }
          for(column=4; column<=4; column++){
            printf("%-10.2f\t", priceDoubleDecker);
          }
          printf("\n");
        }
      }
    }
  }
  /*Prints footer for aesthetic purposes*/
  for(row=1; row<=1; row++){
    printf("***********************************************************************************************\n");
    printf("*                                                                                             *\n");
    printf("***********************************************************************************************\n");
  }
}

/* ********************************************************
* Function Name : Coins
*
* Input Parameters : float change, calculates minimum number of coins to return
*                    according to change value calculated in vending function.
*
* Returns : Prints number of coins returned as change
*
* Purpose of function : This function is to return the minimum number of coins
*                       to the user.
******************************************************** */

float coins(float change){
    float oneCent; /*Variable for 1 cent coins*/
    float twoCent; /*Variable for 2 cent coins*/
    float fiveCent; /*Variable for 5 cent coins*/
    float tenCent; /*Variable for 10 cent coins*/
    float twentyCent; /*Variable for 20 cent coins*/
    float fiftyCent; /*Variable for 50 cent coins*/
    float oneEuro; /*Variable for 1 Euro coins*/
    float twoEuro; /*Variable for 2 Euro coins*/

    /*Setting starting Value*/
    oneCent=0;
    twoCent=0;
    fiveCent=0;
    tenCent=0;
    twentyCent=0;
    fiftyCent=0;
    oneEuro=0;
    twoEuro=0;

    /*Count 2 Euro Coins*/
    while(change >= 2.00){
      twoEuro++;
      change = change - 2.00;
    }
    /*Count 1 Euro Coins*/
    while(change >= 1.00){
      oneEuro++;
      change = change - 1.00;
    }
    /*Count 50 cent Coins*/
    while(change >= 0.50){
      fiftyCent++;
      change = change - 0.50;
    }
    /*Count 20 cent Coins*/
    while(change >= 0.20){
      twentyCent++;
      change = change - 0.20;
    }
    /*Count 10 cent Coins*/
    while(change >= 0.10){
      tenCent++;
      change = change - 0.10;
    }
    /*Count 5 cent Coins*/
    while(change >= 0.05){
      fiveCent++;
      change = change - 0.05;
    }
    /*Count 2 cent Coins*/
    while(change >= 0.02){
      twoCent++;
      change = change - 0.02;
    }
    /*Count 1 cent Coins*/
    while(change >= 0.01){
      oneCent++;
      change = change - 0.01;
    }

    /*Print coins*/
    printf("Coins Returned:\n");
    printf("x%.f One Cent(s)\n", oneCent);
    printf("x%.f Two Cent(s)\n", twoCent);
    printf("x%.f Five Cent(s)\n", fiveCent);
    printf("x%.f Ten Cent(s)\n", tenCent);
    printf("x%.f Twenty Cent(s)\n", twentyCent);
    printf("x%.f Fifty Cent(s)\n", fiftyCent);
    printf("x%.f One Euro(s)\n", oneEuro);
    printf("x%.f Two Euro(s)\n\n", twoEuro);

}

/* *********************************************************
* Function Name : vending
*
* Input Parameters : int stockMars, stock of Mars Chocolate bar
*                    int stockBounty, stock of Bounty Chocolate bar
*                    int stockCurlyWurly, stock of Curly Wurly Chocolate bar
*                    int stockToffeeCrisp, stock of Toffee Crisp Chocolate bar
*                    int stockDoubleDecker, stock of Double Decker Chocolate bar
*                    float priceMars, Price for 1 Mars Chocolate bar
*                    float priceBounty, Price for 1 Bounty Chocolate bar
*                    float priceCurlyWurly, Price for 1 Curly Wurly Chocolate bar
*                    float priceToffeeCrisp, Price for 1 Toffe Crisp bar
*                    float priceDoubleDecker, Price for 1 Doule Decker bar
*                    int selection, number selection input by the user
*                    float fund, Funds input from the user
*
* Returns : Dispense Chocolate bar requested, calculates change owed and difference
*            in funds needed, remaining stock, machine status.
*
* Purpose of function : This function is to Dispense the Chocolate bar requested,
*                        calculates change owed and difference in funds needed
*                        if not enough funds have been added by the user,
*                        remaining stock and machine status. Gives a choice for
*                        the user to order again or quit. Total balance/change owed
*                        is returned to the user in the event that all stock is 0.
******************************************************** */

void vending(int stockMars, int stockBounty, int stockCurlyWurly, int stockToffeeCrisp, int stockDoubleDecker, float priceMars,
             float priceBounty, float priceCurlyWurly, float priceToffeeCrisp, float priceDoubleDecker, int selection, float fund){
  float change; /*Variable for change*/
  float difference; /*Variable for difference in funds*/
  float addFund; /*Variable for fund in the event user input is too low*/
  char choice; /*Variable for Choice*/
  char bars[5][15] = {"Mars","Bounty","Curly Wurly","Toffee Crisp","Double Decker"}; /*String Array of Chocolate bars */
  /*If all stock is 0*/
  if (stockMars<=0 && stockBounty<=0 && stockCurlyWurly<=0 &&  stockToffeeCrisp<=0 &&  stockDoubleDecker<=0) {
    printf("OUT OF ORDER\n");
    printf("Apologies for the inconvenice\n");
    printf("Refunded balance: %.2f\n", fund);
    exit(0);
  }
  /*Swicth statemets for selection*/
    switch (selection) {
      case 1:
      /*If selection is mars*/
          if(stockMars>0 && fund>=priceMars){
            printf("\nPlease take your product\nOne %s dispensed\n", bars[0]);
            stockMars = --stockMars; /*Decremts stock*/
            change = fund-priceMars; /*calculate change*/
            fund = change-change; /*If user inputs exact ammount, nothing is given back*/
            printf("\nPlease take your change: %.2f\n\n", change);
            coins(change); /*calls coin function*/
            }else if(stockMars>0 && fund<priceMars){
              do {
                difference = priceMars-fund; /*calculates amount still required*/
                printf("\nNot enough funds\nPlease insert atleast %.2f\n", difference);
                scanf("%f",&addFund); /*User input for fund*/
                fund = addFund+fund; /*Sets fund to new value*/
              } while(fund<priceMars);
            if(stockMars>0 && fund>=priceMars){
              printf("\nPlease take your product\nOne %s dispensed\n", bars[0]);
              stockMars = --stockMars; /*Decrements stock*/
              change = fund-priceMars;
              fund = change-change;
              printf("\nPlease take your change: %.2f\n\n", change);
              coins(change); /*calls coin function*/
            }
          }
          /*If out of stock*/
          if((stockMars<=0 && fund>=priceMars) ||
            (stockMars<=0 && fund<=priceMars)){
            printf("\nProduct %s out of stock\n", bars[0]);
            if(fund>0){
              printf("Refunded balance: %.2f\n", fund);
              coins(fund); /*calls coin function*/
            }
          }
          break;
      case 2:
      /*If selection is bounty*/
          if(stockBounty>0 && fund>=priceBounty){
          	printf("\nPlease take your product\nOne %s dispensed\n", bars[1]);
          	stockBounty = --stockBounty;
          	change = fund-priceBounty;
          	fund = change-change;
          	printf("\nPlease take your change: %.2f\n\n", change);
            coins(change);
          	}else if(stockBounty>0 && fund<priceBounty){
          		do {
          			difference = priceBounty-fund;
          			printf("\nNot enough funds\nPlease insert atleast %.2f\n", difference);
          			scanf("%f",&addFund);
          			fund = addFund+fund;
          		} while(fund<priceBounty);
          	if(stockBounty>0 && fund>=priceBounty){
          		printf("\nPlease take your product\nOne %s dispensed\n", bars[1]);
          		stockBounty = --stockBounty;
          		change = fund-priceBounty;
          		fund = change-change;
          		printf("Please take your change: %.2f\n", change);
              coins(change);
          	}
          }
          if((stockBounty<=0 && fund>=priceBounty) ||
          	(stockBounty<=0 && fund<=priceBounty)){
          	printf("\nProduct %s out of stock\n", bars[1]);
          	if(fund>0){
          		printf("Refunded balance: %.2f\n", fund);
              coins(fund);
          	}
          }
          break;
      case 3:
      /*If selection is Curly Wurly*/
          if(stockCurlyWurly>0 && fund>=priceCurlyWurly){
            printf("\nPlease take your product\nOne %s dispensed\n", bars[2]);
            stockCurlyWurly = --stockCurlyWurly;
            change = fund-priceCurlyWurly;
            fund = change-change;
            printf("\nPlease take your change: %.2f\n\n", change);
            coins(change);
            }else if(stockCurlyWurly>0 && fund<priceCurlyWurly){
              do {
                difference = priceCurlyWurly-fund;
                printf("\nNot enough funds\nPlease insert atleast %.2f\n", difference);
                scanf("%f",&addFund);
                fund = addFund+fund;
              } while(fund<priceCurlyWurly);
            if(stockCurlyWurly>0 && fund>=priceCurlyWurly){
              printf("\nPlease take your product\nOne %s dispensed\n", bars[2]);
              stockCurlyWurly = --stockCurlyWurly;
              change = fund-priceCurlyWurly;
              fund = change-change;
              printf("Please take your change: %.2f\n\n", change);
              coins(change);
            }
          }
          if((stockCurlyWurly<=0 && fund>=priceCurlyWurly) ||
            (stockCurlyWurly<=0 && fund<=priceCurlyWurly)){
            printf("\nProduct %s out of stock\n", bars[2]);
            if(fund>0){
              printf("Refunded balance: %.2f\n", fund);
              coins(fund);
            }
          }
          break;
      case 4:
      /*If selection is Toffee Crisp*/
          if(stockToffeeCrisp>0 && fund>=priceToffeeCrisp){
            printf("\nPlease take your product\nOne %s dispensed\n", bars[3]);
            stockToffeeCrisp = --stockToffeeCrisp;
            change = fund-priceToffeeCrisp;
            fund = change-change;
            printf("\nPlease take your change: %.2f\n\n", change);
            coins(change);
            }else if(stockToffeeCrisp>0 && fund<priceToffeeCrisp){
              do {
                difference = priceToffeeCrisp-fund;
                printf("\nNot enough funds\nPlease insert atleast %.2f\n", difference);
                scanf("%f",&addFund);
                fund = addFund+fund;
              } while(fund<priceToffeeCrisp);
            if(stockToffeeCrisp>0 && fund>=priceToffeeCrisp){
              printf("\nPlease take your product\nOne %s dispensed\n", bars[3]);
              stockToffeeCrisp = --stockToffeeCrisp;
              change = fund-priceToffeeCrisp;
              fund = change-change;
              printf("\nPlease take your change: %.2f\n\n", change);
              coins(change);
            }
          }
          if((stockToffeeCrisp<=0 && fund>=priceToffeeCrisp) ||
            (stockToffeeCrisp<=0 && fund<=priceToffeeCrisp)){
            printf("\nProduct %s out of stock\n", bars[3]);
            if(fund>0){
              printf("Refunded balance: %.2f\n", fund);
              coins(fund);
            }
          }
          break;
      case 5:
      /*If selection is Double Decker*/
          if(stockDoubleDecker>0 && fund>=priceDoubleDecker){
          	printf("\nPlease take your product\nOne %s dispensed\n", bars[4]);
          	stockDoubleDecker = --stockDoubleDecker;
          	change = fund-priceDoubleDecker;
          	fund = change-change;
          	printf("\nPlease take your change: %.2f\n\n", change);
            coins(change);
          	}else if(stockDoubleDecker>0 && fund<priceDoubleDecker){
          		do {
          			difference = priceDoubleDecker-fund;
          			printf("\nNot enough funds\nPlease insert atleast %.2f\n", difference);
          			scanf("%f",&addFund);
          			fund = addFund+fund;
          		} while(fund<priceDoubleDecker);
          	if(stockDoubleDecker>0 && fund>=priceDoubleDecker){
          		printf("\nPlease take your product\nOne %s dispensed\n", bars[4]);
          		stockDoubleDecker = --stockDoubleDecker;
          		change = fund-priceDoubleDecker;
          		fund = change-change;
          		printf("\nPlease take your change: %.2f\n\n", change);
              coins(change);
          	}
          }
          if((stockDoubleDecker<=0 && fund>=priceDoubleDecker) ||
          	(stockDoubleDecker<=0 && fund<=priceDoubleDecker)){
          	printf("\nProduct %s out of stock\n", bars[4]);
          	if(fund>0){
          		printf("Refunded balance: %.2f\n", fund);
              coins(fund);
          	}
          }
          break;
    }
    /*Call print table function*/
    printTable(stockMars, stockBounty, stockCurlyWurly, stockToffeeCrisp, stockDoubleDecker,
               priceMars, priceBounty, priceCurlyWurly, priceToffeeCrisp, priceDoubleDecker);
    /*Asks user if they would like anything else*/
    printf("\nWould you like anything else? (Y or N)\n");
    scanf(" %c", &choice); /*Choice input*/
    if(choice=='Y' || choice=='y'){
      printf("\nPlease choose your product by typing in your selection\n");
      printf("A");
      scanf("%d[1-5]", &selection); /*Selection input*/
      printf("\nPlease type in your available funds\n");
      scanf(" %f", &fund); /*Fund input*/
      vending(stockMars, stockBounty, stockCurlyWurly, stockToffeeCrisp, stockDoubleDecker,
              priceMars, priceBounty, priceCurlyWurly, priceToffeeCrisp, priceDoubleDecker, selection, fund);
    }else if(choice=='N' || choice=='n'){
      printf("\nThank you for your custom, Have a great day\n");
      exit(0);
    }
}

int main(void){

  int stockMars = 2; /*Setting Stock for Mars*/
  int stockBounty = 2; /*Setting Stock for Bounty*/
  int stockCurlyWurly = 2; /*Setting Stock for Curly Wurly*/
  int stockToffeeCrisp = 2; /*Setting Stock for Toffee Crisp*/
  int stockDoubleDecker = 2; /*Setting Stock for Double Decker*/
  float priceMars = 0.90; /*Setting price for Mars*/
  float priceBounty = 1.20; /*Setting price for Bounty*/
  float priceCurlyWurly = 1.10; /*Setting price for Curly Wurly*/
  float priceToffeeCrisp = 0.75; /*Setting price for Toffe Crisp*/
  float priceDoubleDecker = 1.01; /*Setting price for Double Decker*/
  int selection;
  float fund;
  /*Call print table function*/
  printTable(stockMars, stockBounty, stockCurlyWurly, stockToffeeCrisp, stockDoubleDecker,
             priceMars, priceBounty, priceCurlyWurly, priceToffeeCrisp, priceDoubleDecker);
  /*If in stock, and selection is not given, ask user for selection and fund*/
  do {
    printf("\nPlease choose your product by typing in your selection\n");
    printf("A");
    scanf("%d[1-5]", &selection);
    printf("\nPlease type in your available funds\n");
    scanf("%f", &fund);
    /*Call vending function*/
    vending(stockMars, stockBounty, stockCurlyWurly, stockToffeeCrisp, stockDoubleDecker,
            priceMars, priceBounty, priceCurlyWurly, priceToffeeCrisp, priceDoubleDecker, selection, fund);
  } while((selection!=0 && stockMars>0) || (selection!=0 && stockBounty>0) || (selection!=0 && stockCurlyWurly>0) ||
          (selection!=0 && stockToffeeCrisp>0) || (selection!=0 && stockDoubleDecker>0));


  system("pause");
  return 0;
}
