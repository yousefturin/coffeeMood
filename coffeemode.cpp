#include<stdlib.h>

#include<conio.h>
#include<iostream>
#include<ctime>
#include <unistd.h>
int choice ;
using namespace std;
int test = true;




int switchcase() {
	
	
	
	
	
	switch (choice){
		
		
		case 1 : 
		 	cout<<"it's okay , after you take your cup of coffee everytink will change"<<endl;
		 	cout<<"how would you like you coffee? strong (1)---- light (2) "<<endl;
		 		cin>>choice;
		 		{
				
		 		if(choice == 1){
				 
		 			cout<<"how you like you coffe to be?  hot(1)---- cold (2)"<<endl;
		 				cin>>choice;
		 			if(choice== 1){
		 				cout<<"what is the time now ?  morning(1)---- afternoon (2)---- night(3)"<<endl;
					 	cin>>choice;
					 	if (choice == 1){
					 		cout <<"You need to try a turkish coffe it's the best for moring"<<endl;
							sleep(7);	
							
						
							break;					 		
						 }
					 	if (choice == 2){
					 		cout <<"You need to try americano with extra esspreso shot it's the best	after your lunch it will give you power to coninoue your day  "<<endl;
							sleep(7);	
							
							break;					 		
						 }
					 	if (choice == 3){
					 		cout <<"You need to try mocha coffe it's the best for night and it's strong' "<<endl;
							sleep(7);	
							
							break;					 		
						 }						 						 
					 } 
					if(choice== 2){
		 				cout<<"what is the time now ?  morning(1)---- afternoon (2)---- night(3)"<<endl;
					 	cin>>choice;
					 	if (choice == 1){
					 		cout <<"You need to try a ice americano with exra shot coffe it's the best for moring"<<endl;
							sleep(7);	
							
							break;					 		
						 }
					 	if (choice == 2){
					 		cout <<"You need to try  ice mocha whith extra shot it's the best	after your lunch it will give you power to coninoue your day  "<<endl;
							sleep(7);	
							
							break;					 		
						 }
					 	if (choice == 3){
					 		cout <<"You need to try Hazelnut latte coffe it's the best for night and it's strong' "<<endl;
							sleep(7);	
							
							break;					 		
						 }						 						 
					 } 
				 }
				if(choice == 2){
			
		 			cout<<"how you like you coffe to be?  hot(1)---- cold (2)"<<endl;
		 				cin>>choice;
		 			if(choice== 1){
		 				cout<<"what is the time now ?  morning(1)---- afternoon (2)---- night(3)"<<endl;
					 	cin>>choice;
					 	if (choice == 1){
					 		cout <<"You need to try a filter coffe it's the best for moring and light"<<endl;
							sleep(7);	
							
							break;					 		
						 }
					 	if (choice == 2){
					 		cout <<"You need to try americano  it's the best	after your lunch it will give you power to coninoue your day  "<<endl;
							sleep(7);	
						
							break;					 		
						 }
					 	if (choice == 3){
					 		cout <<"You need to try latte coffe it's the best for night and it's strong' "<<endl;
							sleep(7);	
						
							break;					 		
						 }						 						 
					 } 
		 			if(choice== 2){
		 				cout<<"what is the time now ?  morning(1)---- afternoon (2)---- night(3)"<<endl;
					 	cin>>choice;
					 	if (choice == 1){
					 		cout <<"You need to try a ice filter coffe it's the best for moring and light"<<endl;
							sleep(7);	
						
							break;					 		
						 }
					 	if (choice == 2){
					 		cout <<"You need to try  ice latte  it's the best	after your lunch it will give you power to coninoue your day  "<<endl;
							sleep(7);	
							
							break;					 		
						 }
					 	if (choice == 3){
					 		cout <<"You need to try  frapuchino coffe it's the best for night and it's strong' "<<endl;
							sleep(7);	
						
							
							break;					 		
						 }						 						 
					 } 					 		 			
				 	}
 				}
		break;
		case 2:
			cout<<"we will try to make you feel better "<<endl;
			cout<<"choose what you like (1) tea ---(2) fresh jucies ---(3) hot drinks "<<endl;
			cin>>choice;
			if (choice == 1 ){
				cout<<"choose what you like (1) fruts tea ---(2) green tea ---(3) normal tea "<<endl;
				cin>>choice;
				if(choice==1){
					cout<<"the best fruts tea to make you feel better is a green aple with mint tea "<<endl;
					sleep(7);	
					
					break;
				}
				if(choice==2){
					cout<<"the best tea to make you feel better is a green tea  try it "<<endl;
					sleep(7);	
				
					break;					
				}
				if(choice==3){
					cout<<"the best tea to make you feel better is a hot cup of strong tea with slice of limon  try it "<<endl;
					sleep(7);	
				
					break;					
				}					
			}
			if (choice == 2 ){
				cout<<"choose what you like (1) Citrus fruits ---(2) normal fruits ---(3) fruits with figatabels "<<endl;
				cin>>choice;
				if(choice==1){
					cout<<"the best fruts mix to make you feel better is a limon with mint "<<endl;
					sleep(7);	
				
					break;					
				}
				if(choice==2){
					cout<<"the best Tropical and exotic to make you feel better is a mangoes jucie try it "<<endl;
					sleep(7);	
				
					break;					
				}
				if(choice==3){
					cout<<"the best mix drink to make you feel better is a Carrot and orange mix  try it "<<endl;
					sleep(7);	
				
					break;					
				}					
			}			
			
			if (choice == 3 ){
				cout<<"choose what you like (1) Drinks without sugar ---(2) Drinks with sugar ---(3) Drinks with creema  "<<endl;
				cin>>choice;
				if(choice==1){
					cout<<"the best hot drink without sugar to make you feel better is a Keto Hot Chocolate "<<endl;
					sleep(7);	
				
					break;					
				}
				if(choice==2){
					cout<<"the best hot drink with sugar to make you feel better is a Pumpkin Spice White Hot Chocolate try it "<<endl;
					sleep(7);	
				
					break;					
				}
				if(choice==3){
					cout<<"the best hot mix drink to make you feel better is a Hot Cocoa  with marshmelo  try it "<<endl;
					sleep(7);	
			
					break;					
				}					
			}				
			
		case 3:
			cout<<"You feel good, but did you tried your special recipes for drinks "<<endl;
								sleep(2);
			cout<<"do you want to see them (1/YES),(2/NO)??"<<endl;
			cin>>choice;
			if (choice==1){
				cout<<"Which special recipes you want to know (1/hot drinks),=> not finshied it's too long for the system (2/cold drinks)? "<<endl;
				cin>>choice;
				if (choice== 1){
					sleep(1);	
					system("CLS");
					cout<<"here is our special recipes for you "<<endl;
					cout<<"---------------------------------------------------"<<endl;
					cout<<"|1- Easy Chai Tea        | 2- Spicy Mulled Wine   |"<<endl;
					cout<<"|3- Creamy Caramel Latté | 4- Creamy Caramel Latté|"<<endl;
					cout<<"|5- Minty Hot Cocoa Float| 6- Warm Hazelnut Toddy |"<<endl;
					cout<<"|7- Malted Hot Cocoa With| 8- Magic Cocoa         |"<<endl;
					cout<<"|  Toasted Marshmallows  |                        |"<<endl;
					cout<<"---------------------------------------------------"<<endl;
					cin>>choice;{
					if (choice==1){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"8 cardamom seeds"<<endl;
						cout<<"8 cloves"<<endl;
						cout<<"4 black peppercorns"<<endl;
						cout<<"2 cinnamon sticks"<<endl;						
						cout<<"1 1-inch piece fresh ginger, sliced"<<endl;
						cout<<"2 cups whole milk"<<endl;
						cout<<"4 bags black tea (such as Darjeeling)"<<endl;
						cout<<"8 teaspoons sugar or more, to taste"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Place the cardamom, cloves, and peppercorns in a resealable plastic bag and crush with a heavy skillet."<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Step 2"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Place the crushed spices in a medium saucepan, along with the cinnamon sticks, ginger, milk, and 2 cups water; bring to a boil. Remove from heat, add the tea bags, cover, and let steep for 10 minutes."<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Step 3"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Strain into cups. To each cup, add 2 teaspoons sugar or more, to taste."<<endl;												
					}
					if (choice==2){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"2 (750-mL) bottles full-bodied dry red wine (such as Zinfandel)"<<endl;
						cout<<"½ cup black peppercorns"<<endl;
						cout<<"1/3 cup granulated sugar"<<endl;
						cout<<"4 (2-in.) orange peel strips (from 1 orange)"<<endl;						
						cout<<"1 (1-in.) piece fresh ginger, peeled and sliced"<<endl;
						cout<<"1 cinnamon stick, plus more for garnish"<<endl;
						cout<<"1 whole star anise"<<endl;
						cout<<"Orange slices"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Stir together wine, peppercorns, sugar, orange peel, ginger, cinnamon stick, and star anise in a large saucepan. Bring to a simmer over high. Remove from heat; cover and let stand 30 minutes. Strain and discard solids. Pour evenly into 8 glasses and garnish with orange slices and cinnamon sticks. Serve warm."<<endl;
						cout<<"====================================================="<<endl;
										
					}
					if (choice==3){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"2 ounces freshly-brewed espresso coffee (2 shots), or 1/3 cup of super strong coffee made with an Aeropress, pour over cone, French press, or drip machine (many machines have a “strong” or “espresso” setting)"<<endl;
						cout<<"6 ounces 2% milk"<<endl;
						cout<<"1/2 ounce caramel syrup (optional)"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"To make the milk foam without a frothing tool, fill a clean, empty mason jar with the milk, making sure not to fill the container more than halfway so you’ll have room for the airy foam. Screw the lid on the jar and give it a vigorous shake for about a minute. The milk should look foamy and have doubled in volume."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 2"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Unscrew the lid from the jar and set it aside. Heat the milk jar uncovered in the microwave for 30 seconds. You’ll see that the foam has now risen to the top of the jar and looks stabilized, which means it’s ready to use."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 3"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Pour the warm milk over the hot, freshly-brewed espresso or strong coffee in your mug, then use a spoon to gently scoop the extra frothy milk foam over top. Make sure to use the foam right away, as it will dissolve if left sitting out for more than a few minutes."<<endl;												
						cout<<"====================================================="<<endl;						
						cout<<"Step 4"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Finish with a drizzle of caramel syrup on top. Add a sprinkle of cinnamon or cocoa powder, if desired."<<endl;												
						cout<<"====================================================="<<endl;						
					}
					if (choice==4){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"1 navel orange"<<endl;
						cout<<"½ gallon apple cider (not juice)"<<endl;
						cout<<"2 tablespoons honey"<<endl;
						cout<<"5 whole allspice berries"<<endl;						
						cout<<"6 whole cloves"<<endl;
						cout<<"pinch ground nutmeg"<<endl;
						cout<<"1 1½-inch piece ginger, thinly sliced"<<endl;
						cout<<"8 cinnamon sticks"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Using a vegetable peeler, peel the zest from the orange to create long strips."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 2"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"In a medium pot, bring the cider, honey, allspice, cloves, nutmeg, ginger, and orange zest to a simmer. Do not boil. Heat, uncovered, for 30 minutes."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 3"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Ladle into cups and serve warm with the cinnamon sticks."<<endl;
						cout<<"====================================================="<<endl;																		
					}
					if (choice==5){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"1 serving hot cocoa mix (plus the ingredients called for in the package directions)"<<endl;
						cout<<"2 pinches ground chipotle chili pepper"<<endl;
						cout<<"2 pinches ground cinnamon"<<endl;
						cout<<"2 tablespoons sweetened whipped cream"<<endl;						
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Prepare the hot cocoa mix according to the package directions."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 2"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Mix with half the chipotle and half the cinnamon."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 3"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Top with the whipped cream and sprinkle with the remaining chipotle and cinnamon."<<endl;												
						cout<<"====================================================="<<endl;						
					}	
					if (choice==6){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"1 ½ ounces Frangelico"<<endl;
						cout<<"½ cup hot water"<<endl;
						cout<<"2 tablespoons lightly whipped heavy cream"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"In a mug, stir together the Frangelico and hot water. Spoon the whipped cream over the top before serving."<<endl;											
						cout<<"====================================================="<<endl;						
					}
					if (choice==7){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"1 serving hot cocoa mix (plus the ingredients called for in the package directions)"<<endl;
						cout<<"3 marshmallows"<<endl;
						cout<<"3 tablespoons malted milk powder"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Heat broiler (of oven or toaster oven)."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 2"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Place the marshmallows on a foil-lined broilerproof baking sheet and broil until just golden, about 30 seconds."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 3"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Meanwhile, prepare the hot cocoa mix according to the package directions."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 4"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Mix with the malted milk powder."<<endl;	
						cout<<"====================================================="<<endl;						
						cout<<"Step 5"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Top with the toasted marshmallows."<<endl;					
						cout<<"====================================================="<<endl;																									
					}
					if (choice==8){
						cout<<"Ingredients"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"1 serving hot cocoa mix (plus the ingredients called for in the package directions)"<<endl;
						cout<<"¼ cup mint chocolate chip ice cream"<<endl;
						cout<<"1 sprig fresh mint"<<endl;						
						cout<<"====================================================="<<endl;
						cout<<"Directions"<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 1"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Prepare the hot cocoa mix according to the package directions."<<endl;
						cout<<"====================================================="<<endl;						
						cout<<"Step 2"<<endl;
						cout<<"====================================================="<<endl;
						cout<<"Top with the ice cream and mint."<<endl;		
						cout<<"====================================================="<<endl;																
					}																																	
					
				
				
				
				}	
			}
				
			}
			if(choice== 2){
				test = false;
				
			}						
			
			
	
	
	
	}
	
	
}



int coffeeType(){
	
	
	
	cout<<"WELCOME"<<endl;
	cout<<"this program tell you what coffe you may drink depent on the anwsers that it will take from you"<<endl;
	cout<<"HOW ARE YOU TODAY ---- CHOOSE A SCALE FORM (1-3) 3 is good & 1 is for bad"<<endl;
	cin>>choice;
	switchcase();
	
	
}




int main(int argc, char** argv) {

	coffeeType();
}
