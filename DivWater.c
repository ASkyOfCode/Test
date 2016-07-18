#include <stdio.h>
typedef struct Action{
	int frombottle;
	int watercount;
};
typedef struct BottleState{
	int bottlecontainer;
	int currentwater;
	Action currentaction;
};
bool CheckSuccess(BottleState from , BottleState to){
	if(from.bottlecontainer != to.bottlecontainer && from.currentwater != 0 && to.currentwater != to.bottlecontainer){
		if(to.currentwater+from.currentaction.watercount > to.bottlecontainer){
			return true;
		}
	}else{
	   return false;
	}
}
void ChangeWater(BottleState from,BottleState to){
   from.currentwater -= from.currentaction.watercount;
   to.currentwater += from.currentaction.watercount;
}

void main(){
   BottleState bottle[3] = { {8,8,{1,0}} , {5,0,{2,0}} ,{3,0,{3,0}} }；
   
}
