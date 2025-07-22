#include<iostream>
using namespace std;

char solvedCube[6][9]={
    {'w','w','w','w','w','w','w','w','w'},
    {'g','g','g','g','g','g','g','g','g'},
    {'o','o','o','o','o','o','o','o','o'},
    {'b','b','b','b','b','b','b','b','b'},
    {'r','r','r','r','r','r','r','r','r'},
    {'y','y','y','y','y','y','y','y','y'}
    };


char cube[6][9] = {
    {'g','b','y','r','w','o','w','r','w'},          //white center 
    {'o','g','y','g','g','o','r','o','b'},          //green center
    {'b','w','y','y','o','w','o','g','b'},          //orange center 
    {'g','w','y','o','b','r','r','y','o'},          //blue center
    {'r','b','w','w','r','r','b','b','w'},          //red center
    {'g','b','o','y','y','g','g','y','r'}           //yellow center 
    };

// 0->clockwise
// 1->anticlockwise
void delay(){
    for(int dly=0;dly<=1;dly++){}
}
void G0(char cube[][9]){
/*
for green face 
0->2   2->8  8->6   6->0    
1->5   5->7  7->3   3->1 
*/
// even wala

swap(cube[1][0],cube[1][2]);
swap(cube[1][0],cube[1][8]);
swap(cube[1][0],cube[1][6]);
swap(cube[1][1],cube[1][5]);
swap(cube[1][1],cube[1][7]);
swap(cube[1][1],cube[1][3]);

//remaining faces
swap(cube[4][2],cube[5][8]);
swap(cube[4][5],cube[5][7]);
swap(cube[4][8],cube[5][6]);

swap(cube[4][2],cube[2][6]);
swap(cube[4][5],cube[2][3]);
swap(cube[4][8],cube[2][0]);

swap(cube[4][2],cube[0][0]);
swap(cube[4][5],cube[0][1]);
swap(cube[4][8],cube[0][2]);
    cout<<"000000BC"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;  
delay();
//done
}

void G1(char cube[][9]){
swap(cube[1][0],cube[1][6]);
swap(cube[1][0],cube[1][8]);
swap(cube[1][0],cube[1][2]);
swap(cube[1][1],cube[1][3]);
swap(cube[1][1],cube[1][7]);
swap(cube[1][1],cube[1][5]);

//remaining faces 

swap(cube[2][0],cube[5][6]);
swap(cube[2][3],cube[5][7]);
swap(cube[2][6],cube[5][8]);

swap(cube[2][0],cube[4][8]);
swap(cube[2][3],cube[4][5]);
swap(cube[2][6],cube[4][2]);

swap(cube[2][0],cube[0][2]);
swap(cube[2][3],cube[0][1]);
swap(cube[2][6],cube[0][0]);


    cout<<"000000BE"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
    

delay(); 

//done
}

void R0(char cube[][9]){
swap(cube[4][0],cube[4][2]);
swap(cube[4][0],cube[4][8]);
swap(cube[4][0],cube[4][6]);
swap(cube[4][1],cube[4][5]);
swap(cube[4][1],cube[4][7]);
swap(cube[4][1],cube[4][3]);

//remaining faces 
swap(cube[3][2],cube[5][6]);
swap(cube[3][5],cube[5][3]);
swap(cube[3][8],cube[5][0]);

swap(cube[3][2],cube[1][6]);
swap(cube[3][5],cube[1][3]);
swap(cube[3][8],cube[1][0]);

swap(cube[3][2],cube[0][6]);
swap(cube[3][5],cube[0][3]);
swap(cube[3][8],cube[0][0]);


    cout<<"000000F4"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
    
delay();
//done
}
void R1(char cube[][9]){
swap(cube[4][0],cube[4][6]);
swap(cube[4][0],cube[4][8]);
swap(cube[4][0],cube[4][2]);
swap(cube[4][1],cube[4][3]);
swap(cube[4][1],cube[4][7]);
swap(cube[4][1],cube[4][5]);

//remaining faces 

swap(cube[1][0],cube[5][0]);
swap(cube[1][3],cube[5][3]);
swap(cube[1][6],cube[5][6]);

swap(cube[1][0],cube[3][8]);
swap(cube[1][3],cube[3][5]);
swap(cube[1][6],cube[3][2]);

swap(cube[1][0],cube[0][0]);
swap(cube[1][3],cube[0][3]);
swap(cube[1][6],cube[0][6]);


    cout<<"000000F6"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;

delay();
//done
}
void O0(char cube[][9]){
swap(cube[2][0],cube[2][2]);
swap(cube[2][0],cube[2][8]);
swap(cube[2][0],cube[2][6]);
swap(cube[2][1],cube[2][5]);
swap(cube[2][1],cube[2][7]);
swap(cube[2][1],cube[2][3]);

//remaining faces 
swap(cube[1][2],cube[5][2]);
swap(cube[1][5],cube[5][5]);
swap(cube[1][8],cube[5][8]);

swap(cube[1][2],cube[3][6]);
swap(cube[1][5],cube[3][3]);
swap(cube[1][8],cube[3][0]);

swap(cube[1][2],cube[0][2]);
swap(cube[1][5],cube[0][5]);
swap(cube[1][8],cube[0][8]);


    cout<<"000000DC"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done
}
void O1(char cube[][9]){
swap(cube[2][0],cube[2][6]);
swap(cube[2][0],cube[2][8]);
swap(cube[2][0],cube[2][2]);
swap(cube[2][1],cube[2][3]);
swap(cube[2][1],cube[2][7]);
swap(cube[2][1],cube[2][5]);

    //remaining faces 

swap(cube[3][0],cube[5][8]);
swap(cube[3][3],cube[5][5]);
swap(cube[3][6],cube[5][2]);

swap(cube[3][0],cube[1][8]);
swap(cube[3][3],cube[1][5]);
swap(cube[3][6],cube[1][2]);

swap(cube[3][0],cube[0][8]);
swap(cube[3][3],cube[0][5]);
swap(cube[3][6],cube[0][2]);


    cout<<"000000DE"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done
}
void B0(char cube[][9]){
swap(cube[3][0],cube[3][2]);
swap(cube[3][0],cube[3][8]);
swap(cube[3][0],cube[3][6]);
swap(cube[3][1],cube[3][5]);
swap(cube[3][1],cube[3][7]);
swap(cube[3][1],cube[3][3]);

//remaining faces 
swap(cube[2][2],cube[5][0]);
swap(cube[2][5],cube[5][1]);
swap(cube[2][8],cube[5][2]);

swap(cube[2][2],cube[4][6]);
swap(cube[2][5],cube[4][3]);
swap(cube[2][8],cube[4][0]);

swap(cube[2][2],cube[0][8]);
swap(cube[2][5],cube[0][7]);
swap(cube[2][8],cube[0][6]);


    cout<<"000000EC"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done
}
void B1(char cube[][9]){
swap(cube[3][0],cube[3][6]);
swap(cube[3][0],cube[3][8]);
swap(cube[3][0],cube[3][2]);
swap(cube[3][1],cube[3][3]);
swap(cube[3][1],cube[3][7]);
swap(cube[3][1],cube[3][5]);

    //remaining faces 

swap(cube[4][0],cube[5][2]);
swap(cube[4][3],cube[5][1]);
swap(cube[4][6],cube[5][0]);

swap(cube[4][0],cube[2][8]);
swap(cube[4][3],cube[2][5]);
swap(cube[4][6],cube[2][2]);

swap(cube[4][0],cube[0][6]);
swap(cube[4][3],cube[0][7]);
swap(cube[4][6],cube[0][8]);


    cout<<"000000EE"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done

}
void W0(char cube[][9]){
swap(cube[0][0],cube[0][2]);
swap(cube[0][0],cube[0][8]);
swap(cube[0][0],cube[0][6]);
swap(cube[0][1],cube[0][5]);
swap(cube[0][1],cube[0][7]);
swap(cube[0][1],cube[0][3]);

//remaining faces 
swap(cube[3][8],cube[4][8]);
swap(cube[3][7],cube[4][7]);
swap(cube[3][6],cube[4][6]);

swap(cube[3][8],cube[1][8]);
swap(cube[3][7],cube[1][7]);
swap(cube[3][6],cube[1][6]);

swap(cube[3][8],cube[2][8]);
swap(cube[3][7],cube[2][7]);
swap(cube[3][6],cube[2][6]);


    cout<<"0000007C"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done

}
void W1(char cube[][9]){
swap(cube[0][0],cube[0][6]);
swap(cube[0][0],cube[0][8]);
swap(cube[0][0],cube[0][2]);
swap(cube[0][1],cube[0][3]);
swap(cube[0][1],cube[0][7]);
swap(cube[0][1],cube[0][5]);

    //remaining faces 
swap(cube[1][8],cube[4][8]);
swap(cube[1][7],cube[4][7]);
swap(cube[1][6],cube[4][6]);

swap(cube[1][8],cube[3][8]);
swap(cube[1][7],cube[3][7]);
swap(cube[1][6],cube[3][6]);

swap(cube[1][8],cube[2][8]);
swap(cube[1][7],cube[2][7]);
swap(cube[1][6],cube[2][6]);


    cout<<"0000007E"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done
}
void Y0(char cube[][9]){
swap(cube[5][0],cube[5][2]);
swap(cube[5][0],cube[5][8]);
swap(cube[5][0],cube[5][6]);
swap(cube[5][1],cube[5][5]);
swap(cube[5][1],cube[5][7]);
swap(cube[5][1],cube[5][3]);

//remaining faces 
swap(cube[3][0],cube[2][0]);
swap(cube[3][1],cube[2][1]);
swap(cube[3][2],cube[2][2]);

swap(cube[3][0],cube[1][0]);
swap(cube[3][1],cube[1][1]);
swap(cube[3][2],cube[1][2]);

swap(cube[3][0],cube[4][0]);
swap(cube[3][1],cube[4][1]);
swap(cube[3][2],cube[4][2]);


    cout<<"000000F8"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done

}
void Y1(char cube[][9]){
swap(cube[5][0],cube[5][6]);
swap(cube[5][0],cube[5][8]);
swap(cube[5][0],cube[5][2]);
swap(cube[5][1],cube[5][3]);
swap(cube[5][1],cube[5][7]);
swap(cube[5][1],cube[5][5]);

//remaining faces 
swap(cube[1][0],cube[2][0]);
swap(cube[1][1],cube[2][1]);
swap(cube[1][2],cube[2][2]);

swap(cube[1][0],cube[3][0]);
swap(cube[1][1],cube[3][1]);
swap(cube[1][2],cube[3][2]);

swap(cube[1][0],cube[4][0]);
swap(cube[1][1],cube[4][1]);
swap(cube[1][2],cube[4][2]);



    cout<<"000000FA"<<endl;
    cout<<"0002A083"<<endl;
    cout<<"000202E7"<<endl;
delay();
//done
}

bool solved(char  cube[][9]){

for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 9; j++) {
        if (cube[i][j]!= solvedCube[i][j]) {
            return false;
        }
    }
}
return true;
}

bool PermutationLeft( char  cube[][9]){

for(int i=0;i<9 ;i++){
    if(cube[0][i]!='w'){
        return false;
    }
}

for(int i=3;i<9;i++){
    if(cube[1][i]!='g'){
        return false;
    }
    if(cube[2][i]!='o'){
        return false;
    }
    if(cube[3][i]!='b'){
        return false;
    }
    if(cube[4][i]!='r'){
        return false;
    }

}
if(cube[5][1]!='y' || cube[5][3]!='y' || cube[5][4]!='y' || cube[5][5]!='y' || cube[5][7]!='y'){
    return false;
}
return true;
}

bool OrientationLeft(char  cube[][9]){
for(int i=0;i<9 ;i++){
    if(cube[0][i]!='w'){
        return false;
    }
}

for(int i=3;i<9;i++){
    if(cube[1][i]!='g'){
        return false;
    }
    if(cube[2][i]!='o'){
        return false;
    }
    if(cube[3][i]!='b'){
        return false;
    }
    if(cube[4][i]!='r'){
        return false;
    }
}

return true;
}

bool SecondLayerLeft(char cube[6][9]){
for(int i=0;i<9 ;i++){
    if(cube[0][i]!='w'){
        return false;
    }
}

for(int i=1;i<5;i++){
    if(cube[i][6]!=cube[i][7] || cube[i][6]!=cube[i][8]){
        return false;
    }
    
}


return true;

}

bool FirstLayerLeft(char cube[6][9]){
if(cube[0][1]!='w' || cube[0][3]!='w' || cube[0][4]!='w' || cube[0][5]!='w' || cube[0][7]!='w'){
    return false;
}

return true;
}

void swap(char &a,char &b)
{
char t=a;
     a=b;
     b=t;
}

void display ( char cube[6][9]){
for(int i=0;i<6;i++){
        for(int j=0;j<9;j++){
        cout<<cube[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

// Bottom Face 0: White
// Front Face 1: Green
// Right Face 2: Orange
// Back Face 3: Blue
// Left Face 4: Red
// Top Face 5: Yellow

//0---->Clockwise 
//1----> Anti-Clockwise

// cout<<PermutationLeft(cube)<<endl;
// cout<<OrientationLeft(cube)<<endl;
// cout<<SecondLayerLeft(cube)<<endl;
// cout<<FirstLayerLeft(cube)<<endl;


if(solved(cube)){

// cout<<"Cube is already solved"<<endl;
return 0;
}
while(!solved(cube)){

while(PermutationLeft(cube) && !solved(cube)) {

    //if permutation left then do follow these steps to make it fully solved :
    // RUR'U   RUUR'  

    int cnt=0;
    cnt = (int)(cube[5][0] == 'y') + (int)(cube[5][2] == 'y') + (int)(cube[5][6] == 'y') + (int)(cube[5][8] == 'y');
    // cout<<"value of count : "<<cnt<<endl;
    if(cnt==0){

        if(cube[1][2]=='y'){
            // ORANGE -> front face 
            //  B0   Y0  B1  Y0  B0  Y0  Y0  B1
            // cout<<"B0   Y0  B1  Y0  B0  Y0  Y0  B1"<<endl;
            B0(cube);
            Y0(cube);
            B1(cube);
            Y0(cube);
            B0(cube);
            Y0(cube);
            Y0(cube);
            B1(cube);
            //DONE
        }
        else if(cube[2][2]=='y'){
            // BLUE -> front face 
            //  R0   Y0  R1  Y0  R0  Y0  Y0  R1
            // cout<<"R0   Y0  R1  Y0  R0  Y0  Y0  R1"<<endl;
            R0(cube);
            Y0(cube);
            R1(cube);
            Y0(cube);
            R0(cube);
            Y0(cube);
            Y0(cube);
            R1(cube);
            //DONE

        }
        else if(cube[3][2]=='y'){
            // RED -> front face 
            //  G0   Y0  G1  Y0  G0  Y0  Y0  G1
            // cout<<"G0   Y0  G1  Y0  G0  Y0  Y0  G1"<<endl;
            G0(cube);
            Y0(cube);
            G1(cube);
            Y0(cube);
            G0(cube);
            Y0(cube);
            Y0(cube);
            G1(cube);
            //DONE

        }
        else if(cube[4][2]=='y'){
            // GREEN -> front face 
            //  O0   Y0  O1  Y0  O0  Y0  Y0  O1
            // cout<<"O0   Y0  O1  Y0  O0  Y0  Y0  O1"<<endl;
            O0(cube);
            Y0(cube);
            O1(cube);
            Y0(cube);
            O0(cube);
            Y0(cube);
            Y0(cube);
            O1(cube);
            //DONE    
        }
        
    }
    else if(cnt==1){
        // RUR'U RUUR'
        if(cube[5][0]=='y'){
            // RED -> front face 
            //  G0   Y0  G1  Y0  G0  Y0  Y0  G1
            // cout<<"G0   Y0  G1  Y0  G0  Y0  Y0  G1"<<endl;
            G0(cube);
            Y0(cube);
            G1(cube);
            Y0(cube);
            G0(cube);
            Y0(cube);
            Y0(cube);
            G1(cube);
            //DONE
        

        }
        else if(cube[5][2]=='y'){
            // BLUE -> front face 
            //  R0   Y0  R1  Y0  R0  Y0  Y0  R1
            // cout<<"R0   Y0  R1  Y0  R0  Y0  Y0  R1"<<endl;
            R0(cube);
            Y0(cube);
            R1(cube);
            Y0(cube);
            R0(cube);
            Y0(cube);
            Y0(cube);
            R1(cube);
            //DONE
        }
        else if(cube[5][6]=='y'){
            // GREEN -> front face 
            //  O0   Y0  O1  Y0  O0  Y0  Y0  O1
            // cout<<"O0   Y0  O1  Y0  O0  Y0  Y0  O1"<<endl;
            O0(cube);
            Y0(cube);
            O1(cube);
            Y0(cube);
            O0(cube);
            Y0(cube);
            Y0(cube);
            O1(cube);
            //DONE

        }
        else if(cube[5][8]=='y'){
            // ORANGE -> front face 
            //  B0   Y0  B1  Y0  B0  Y0  Y0  B1
            // cout<<"B0   Y0  B1  Y0  B0  Y0  Y0  B1"<<endl;
            B0(cube);
            Y0(cube);
            B1(cube);
            Y0(cube);
            B0(cube);
            Y0(cube);
            Y0(cube);
            B1(cube);
            //DONE
        
        }
    }
    else if(cnt==2 || cnt==3){
        //YE AAJ KRTE HAIN
        if(cube[1][0]=='y'){
            // GREEN -> front face 
            //  O0   Y0  O1  Y0  O0  Y0  Y0  O1
            // cout<<"O0   Y0  O1  Y0  O0  Y0  Y0  O1"<<endl;
            O0(cube);
            Y0(cube);
            O1(cube);
            Y0(cube);
            O0(cube);
            Y0(cube);
            Y0(cube);
            O1(cube);
            //DONE
        }
        else if(cube[2][0]=='y'){
            // ORANGE -> front face 
            //  B0   Y0  B1  Y0  B0  Y0  Y0  B1
            // cout<<"B0   Y0  B1  Y0  B0  Y0  Y0  B1"<<endl;
            B0(cube);
            Y0(cube);
            B1(cube);
            Y0(cube);
            B0(cube);
            Y0(cube);
            Y0(cube);
            B1(cube);
            //DONE

        }
        else if(cube[3][0]=='y'){
                // BLUE -> front face 
            //  R0   Y0  R1  Y0  R0  Y0  Y0  R1
            // cout<<"R0   Y0  R1  Y0  R0  Y0  Y0  R1"<<endl;
            R0(cube);
            Y0(cube);
            R1(cube);
            Y0(cube);
            R0(cube);
            Y0(cube);
            Y0(cube);
            R1(cube);
            //DONE

        }
        else if(cube[4][0]=='y'){
            // RED -> front face 
            //  G0   Y0  G1  Y0  G0  Y0  Y0  G1
            // cout<<"G0   Y0  G1  Y0  G0  Y0  Y0  G1"<<endl;
            G0(cube);
            Y0(cube);
            G1(cube);
            Y0(cube);
            G0(cube);
            Y0(cube);
            Y0(cube);
            G1(cube);
            //DONE
        }

    }
    else if(cnt==4){
        // cout<<"count 4 config"<<endl;
        while(!((cube[4][0]=='r' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='g' 
            && cube[2][0]=='o' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='b')||
            (cube[4][0]=='g' && cube [4][2]=='b' && cube [1][0]=='r' && cube[1][2]=='g' 
                && cube[2][0]=='o' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='r')||
            (cube[4][0]=='r' && cube [4][2]=='g' && cube [1][0]=='o' && cube[1][2]=='r' 
                && cube[2][0]=='g' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='b')||
            (cube[4][0]=='b' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='g' 
                && cube[2][0]=='o' && cube[2][2]=='b' && cube[3][0]=='r' && cube[3][2]=='o')||
            (cube[4][0]=='r' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='o' 
                && cube[2][0]=='b' && cube[2][2]=='g' && cube[3][0]=='o' && cube[3][2]=='b')||
            (cube[4][0]=='o' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='b' 
                && cube[2][0]=='r' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='g')||
            (cube[4][0]=='r' && cube [4][2]=='o' && cube [1][0]=='b' && cube[1][2]=='g' 
                && cube[2][0]=='o' && cube[2][2]=='r' && cube[3][0]=='g' && cube[3][2]=='b'))){
            //Y0
            // cout<<"Y0"<<endl;
            Y0(cube);
        }
            //cube 0: 
            // cout<<"reached cube 0"<<endl;
        if( cube[4][0]=='r' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='g' 
            && cube[2][0]=='o' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='b'){
                

                while(!solved(cube)){
                    if(cube[1][1]=='g' ){
                    // B0   B0  Y0  O0  R1  B0  B0  O1  R0  Y0  B0  B0
                    // cout<<"B0   B0  Y0  O0  R1  B0  B0  O1  R0  Y0  B0  B0"<<endl; 
                    B0(cube);
                    B0(cube);
                    Y0(cube);
                    O0(cube);
                    R1(cube);
                    B0(cube);
                    B0(cube);
                    O1(cube);
                    R0(cube);
                    Y0(cube);
                    B0(cube);
                    B0(cube);
                    


                        
                    }
                    else if (cube[2][1]=='o'){
                    //  R0  R0  Y0  B0  G1  R0  R0  B1  G0  Y0  R0  R0
                    // cout<<"R0  R0  Y0  B0  G1  R0  R0  B1  G0  Y0  R0  R0"<<endl;
                    R0(cube);
                    R0(cube);
                    Y0(cube);
                    B0(cube);
                    G1(cube);
                    R0(cube);
                    R0(cube);
                    B1(cube);
                    G0(cube);
                    Y0(cube);
                    R0(cube);
                    R0(cube);
                    

                    }
                    else if (cube[3][1]=='b'){
                    //  G0  G0  Y0  R0  O1  G0  G0  R1  O0  Y0  G0  G0
                    // cout<<"G0  G0  Y0  R0  O1  G0  G0  R1  O0  Y0  G0  G0"<<endl;
                    G0(cube);
                    G0(cube);
                    Y0(cube);
                    R0(cube);
                    O1(cube);
                    G0(cube);
                    G0(cube);
                    R1(cube);
                    O0(cube);
                    Y0(cube);
                    G0(cube);
                    G0(cube);
                    
                        
                    }
                    else{
                    //  O0  O0  Y0  G0  B1  O0  O0  G1  B0  Y0  O0  O0
                    // cout<<"G0  G0  Y0  R0  O1  G0  G0  R1  O0  Y0  G0  G0"<<endl;
                    G0(cube);
                    G0(cube);
                    Y0(cube);
                    R0(cube);
                    O1(cube);
                    G0(cube);
                    G0(cube);
                    R1(cube);
                    O0(cube);
                    Y0(cube);
                    G0(cube);
                    G0(cube);
                        
                    }

                }
                
        }
        
        //cube 1:
        else if(cube[4][0]=='g' && cube [4][2]=='b' && cube [1][0]=='r' && cube[1][2]=='g' 
            && cube[2][0]=='o' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='r'){

                // steps
                // G1   R0  G1  O0  O0  G0  R1  G1  O0  O0  G0  G0  Y1  
                // cout<<"G1   R0  G1  O0  O0  G0  R1  G1  O0  O0  G0  G0  Y1"<<endl;
                G1(cube);
                R0(cube);
                G1(cube);
                O0(cube);
                G0(cube);
                R1(cube);
                G1(cube);
                O0(cube);
                O0(cube);
                G0(cube);
                G0(cube);
                Y1(cube);
                
        }
        //cube 2:
        else if(cube[4][0]=='r' && cube [4][2]=='g' && cube [1][0]=='o' && cube[1][2]=='r' 
            && cube[2][0]=='g' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='b'){

                // steps
                // O1   G0  O1  B0  B0  O0  G1  O1  B0  B0  O0  O0  Y1
                // cout<<"O1   G0  O1  B0  B0  O0  G1  O1  B0  B0  O0  O0  Y1"<<endl;
                O1(cube);
                G0(cube);
                O1(cube);
                B0(cube);
                B0(cube);
                O0(cube);
                G1(cube);
                O1(cube);
                B0(cube);
                B0(cube);
                O0(cube);
                O0(cube);
                Y1(cube);
                
        }
        //cube 3:
        else if(cube[4][0]=='b' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='g' 
            && cube[2][0]=='o' && cube[2][2]=='b' && cube[3][0]=='r' && cube[3][2]=='o'){

                // steps
                // R1   B0  R1  G0  G0  R0  B1  R1  G0  G0  R0  R0  Y1
                // cout<<"R1   B0  R1  G0  G0  R0  B1  R1  G0  G0  R0  R0  Y1"<<endl;
                R1(cube);
                B0(cube);
                R1(cube);
                G0(cube);
                G0(cube);
                R0(cube);
                B1(cube);
                R1(cube);
                G0(cube);
                G0(cube);
                R0(cube);
                R0(cube);
                Y1(cube);
                
        }
        //cube 4:
        else if(cube[4][0]=='r' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='o' 
            && cube[2][0]=='b' && cube[2][2]=='g' && cube[3][0]=='o' && cube[3][2]=='b'){

                // steps
                // B1   O0  B1  R0  R0  B0  O1  B1  R0  R0  B0  B0  Y1
                // cout<<"B1   O0  B1  R0  R0  B0  O1  B1  R0  R0  B0  B0  Y1"<<endl;
                B1(cube);
                O0(cube);
                B1(cube);
                R0(cube);
                R0(cube);
                B0(cube);
                O1(cube);
                B1(cube);
                R0(cube);
                R0(cube);
                B0(cube);
                B0(cube);
                Y1(cube);
                

        }
        //cube 5:
        else if(cube[4][0]=='o' && cube [4][2]=='r' && cube [1][0]=='g' && cube[1][2]=='b' 
            && cube[2][0]=='r' && cube[2][2]=='o' && cube[3][0]=='b' && cube[3][2]=='g'){

                // steps
                // R1   B0  R1  G0  G0  R0  B1  R1  G0  G0  R0  R0  Y1
                // cout<<"R1   B0  R1  G0  G0  R0  B1  R1  G0  G0  R0  R0  Y1"<<endl;
                R1(cube);
                B0(cube);
                R1(cube);
                G0(cube);
                G0(cube);
                R0(cube);
                B1(cube);
                R1(cube);
                G0(cube);
                G0(cube);
                R0(cube);
                R0(cube);
                Y1(cube);
                

        }
        //cube 6:
        else if(cube[4][0]=='r' && cube [4][2]=='o' && cube [1][0]=='b' && cube[1][2]=='g' 
            && cube[2][0]=='o' && cube[2][2]=='r' && cube[3][0]=='g' && cube[3][2]=='b'){

                // steps
                // R1   B0  R1  G0  G0  R0  B1  R1  G0  G0  R0  R0  Y1
                // cout<<"R1   B0  R1  G0  G0  R0  B1  R1  G0  G0  R0  R0  Y1"<<endl;
                R1(cube);
                B0(cube);
                R1(cube);
                G0(cube);
                G0(cube);
                R0(cube);
                B1(cube);
                R1(cube);
                G0(cube);
                G0(cube);
                R0(cube);
                R0(cube);
                Y1(cube);
                

        }
    

}

}
while(OrientationLeft(cube) && (!PermutationLeft(cube))){

    //if Orientation left then do these to make it to solve the orientation solved and permutation left
    //steps ye hain 
    //FUR U'R'F'

    if((cube[5][3]=='y' && cube[5][5]=='y')      ||  ( cube[5][1]=='y' && cube[5][3]=='y')){
        //GREEN ->front
        // G0 Y0  O0   Y1   O1  G1
        // cout<<"G0 Y0  O0   Y1   O1  G1 "<<endl;
        G0(cube);
        Y0(cube);
        O0(cube);
        Y1(cube);
        O1(cube);
        G1(cube);
        
    }
    else if((cube[5][1]=='y' && cube[5][7]=='y') || (cube[5][7]=='y' && cube[5][3]=='y')){
        //ORANGE ->front
        //O0  Y0  B0  Y1  B1  O1  
        // cout<<"O0  Y0  B0  Y1  B1  O1"<<endl;
        O0(cube);
        Y0(cube);
        B0(cube);
        Y1(cube);
        B1(cube);
        O1(cube);
        

    }
    else if((cube[5][5]=='y' && cube[5][7]=='y')){
        //BLUE ->front 
        //B0  Y0  R0  Y1  R1  B1
        // cout<<"B0  Y0  R0  Y1  R1  B1"<<endl;
        B0(cube);
        Y0(cube);
        R0(cube);
        Y1(cube);
        R1(cube);
        B1(cube);
        

    }
    else {
        //RED ->front 
        //R0    Y0  G0  Y1  G1  R1
        // cout<<"R0    Y0  G0  Y1  G1  R1"<<endl;
        R0(cube);
        Y0(cube);
        G0(cube);
        Y1(cube);
        G1(cube);
        R1(cube);
        
    }


    // cout<<"Orientation Left "<<endl;
    

}
while (SecondLayerLeft(cube) && (!OrientationLeft(cube))){

    //if second layer left then do follow these steps to solve the second layer and orientation left 

    while(cube[1][6]!='g'){
        // cout<<"W0"<<endl;
        W0(cube);
    }
    // if(cube[][])

    //change this for into while 
    int sll=(int)(cube[5][1]=='y') + (int) ( cube[5][3]=='y') + (int )(cube[5][5]=='y') +
    (int)(cube[5][7]=='y')+ (int )(cube[1][1]=='y')+ (int )(cube[2][1]=='y')+ (int )(cube[3][1]=='y')+ (int )(cube[4][1]=='y');


    while(sll!=4 && (!OrientationLeft(cube))){

        for (int i=1; i<5; i++){
            // cout<<i<<endl;
            // cout<<"Condition: "<<cube[i][1]<<"\t"<<cube[i][4]<<endl;
        if (cube[i][1]==cube[i][4]){
            // cout<<"cube["<<i<<"][1] = "<<cube[i][1]<<"\t cube["<<i<<"][4] = "<<cube[i][4]<<endl;
            switch(i){
                case 1:
                if (cube[5][7]=='o'){
                    //move right code
                    //GREEN -> front
                    // Y0 O0 Y1 O1 Y1 G1 Y0 G0
                    // cout<<"Y0 O0 Y1 O1 Y1 G1 Y0 G0"<<endl;
                    Y0(cube);
                    O0(cube);
                    Y1(cube);
                    O1(cube);
                    Y1(cube);
                    G1(cube);
                    Y0(cube);
                    G0(cube);
                    
                }
                else if(cube[5][7]=='r'){
                    //move left code
                    //GREEN -> front
                    // Y1 R1 Y0 R0 Y0 G0 Y1 G1
                    // cout<<"Y1 R1 Y0 R0 Y0 G0 Y1 G1"<<endl;
                    Y1(cube);
                    R1(cube);
                    Y0(cube);
                    R0(cube);
                    Y0(cube);
                    G0(cube);
                    Y1(cube);
                    G1(cube);
                    
                }
                break;
                case 2:
                if (cube[5][5]=='b'){
                    //move right code
                    //ORANGE -> front
                    // Y0 B0 Y1 B1 Y1 O1 Y0 O0
                    // cout<<"Y0 B0 Y1 B1 Y1 O1 Y0 O0"<<endl;
                    Y0(cube);
                    B0(cube);
                    Y1(cube);
                    B1(cube);
                    Y1(cube);
                    O1(cube);
                    Y0(cube);
                    O0(cube);
                    
                }
                else if (cube[5][5]=='g'){
                    //move left code
                    //ORANGE -> front
                    // Y1 G1 Y0 G0 Y0 O0 Y1 O1
                    // cout<<"Y1 G1 Y0 G0 Y0 O0 Y1 O1"<<endl;
                    Y1(cube);
                    G1(cube);
                    Y0(cube);
                    G0(cube);
                    Y0(cube);
                    O0(cube);
                    Y1(cube);
                    O1(cube);
                    
                }
                break;
                case 3:
                if (cube[5][1]=='r'){
                    //move right code
                    //BLUE -> front
                    // Y0 R0 Y1 R1 Y1 B1 Y0 B0
                    // cout<<"Y0 R0 Y1 R1 Y1 B1 Y0 B0"<<endl;
                    Y0(cube);
                    R0(cube);
                    Y1(cube);
                    R1(cube);
                    Y1(cube);
                    B1(cube);
                    Y0(cube);
                    B0(cube);
                    
                }
                else if (cube[5][1]=='o'){
                    //move left code
                    //BLUE -> front
                    // Y1 O1 Y0 O0 Y0 B0 Y1 B1
                    // cout<<"Y1 O1 Y0 O0 Y0 B0 Y1 B1"<<endl;
                    Y1(cube);
                    O1(cube);
                    Y0(cube);
                    O0(cube);
                    Y0(cube);
                    B0(cube);
                    Y1(cube);
                    B1(cube);
                    
                }
                break;
                case 4:
                if (cube[5][3]=='g'){
                    //move right code
                    //RED -> front
                    // Y0 G0 Y1 G1 Y1 R1 Y0 R0
                    // cout<<"Y0 G0 Y1 G1 Y1 R1 Y0 R0"<<endl;
                    Y0(cube);
                    G0(cube);
                    Y1(cube);
                    G1(cube);
                    Y1(cube);
                    R1(cube);
                    Y0(cube);
                    R0(cube);
                    
                }
                else if (cube[5][3]=='b'){
                    //move left code
                    //RED -> front
                    // Y1 B1 Y0 B0 Y0 R0 Y1 R1
                    // cout<<"Y1 B1 Y0 B0 Y0 R0 Y1 R1"<<endl;
                    Y1(cube);
                    B1(cube);
                    Y0(cube);
                    B0(cube);
                    Y0(cube);
                    R0(cube);
                    Y1(cube);
                    R1(cube);
            
                    
                }
                else{
                    //try rotating the top yellow face 
                    // cout<<"Y0"<<endl;
                    // cout<<"pehla wala Y0 hu main halke  m na lo"<<endl;
                    Y0(cube);
    
                }
                break;
            }
        }
        else if(i!=4){
            // cout<<i<<endl;
            // cout<<"cube[4][1] = "<<cube[4][1]<<"\t cube[5][3] = "<<cube[5][3]<<"\t cube[4][4] = "<<cube[4][4]<<endl;
            continue;
            
        }
        
        else{
            //try rotating the top yellow face 
            // cout<<"Y0"<<endl;
            // cout<<"pehla wala Y0 hu main halke  m na lo"<<endl;
            Y0(cube);

        }
        sll=(int)(cube[5][1]=='y') + (int) ( cube[5][3]=='y') + (int )(cube[5][5]=='y') +
        (int)(cube[5][7]=='y')+ (int )(cube[1][1]=='y')+ (int )(cube[2][1]=='y')+ (int )(cube[3][1]=='y')+ (int )(cube[4][1]=='y');
    
    }
    }

    while(sll==4 && (!OrientationLeft(cube))){

        for(int i=1;i<5;i++){
            if(cube[i][3]!=cube[i][4]){
                switch(i){
                    case 1:
                        //move left code
                        //GREEN -> front
                        // Y1 R1 Y0 R0 Y0 G0 Y1 G1
                        // cout<<"Y1 R1 Y0 R0 Y0 G0 Y1 G1"<<endl;
                        Y1(cube);
                        R1(cube);
                        Y0(cube);
                        R0(cube);
                        Y0(cube);
                        G0(cube);
                        Y1(cube);
                        G1(cube);

                    break;
                    case 2:
                    
                        //move left code
                        //ORANGE -> front
                        // Y1 G1 Y0 G0 Y0 O0 Y1 O1
                        // cout<<"Y1 G1 Y0 G0 Y0 O0 Y1 O1"<<endl;
                        Y1(cube);
                        G1(cube);
                        Y0(cube);
                        G0(cube);
                        Y0(cube);
                        O0(cube);
                        Y1(cube);
                        O1(cube);
                    
                
                    break;
                    case 3:
                    
                        //move left code
                        //BLUE -> front
                        // Y1 O1 Y0 O0 Y0 B0 Y1 B1
                        // cout<<"Y1 O1 Y0 O0 Y0 B0 Y1 B1"<<endl;
                        Y1(cube);
                        O1(cube);
                        Y0(cube);
                        O0(cube);
                        Y0(cube);
                        B0(cube);
                        Y1(cube);
                        B1(cube);
                        
                    
                    break;
                    case 4:

                        //move left code
                        //RED -> front
                        // Y1 B1 Y0 B0 Y0 R0 Y1 R1
                        // cout<<"Y1 B1 Y0 B0 Y0 R0 Y1 R1"<<endl;
                        Y1(cube);
                        B1(cube);
                        Y0(cube);
                        B0(cube);
                        Y0(cube);
                        R0(cube);
                        Y1(cube);
                        R1(cube);
                
                    break;
                }
            }
            
        }
        sll=(int)(cube[5][1]=='y') + (int) ( cube[5][3]=='y') + (int )(cube[5][5]=='y') +
        (int)(cube[5][7]=='y')+ (int )(cube[1][1]=='y')+ (int )(cube[2][1]=='y')+ (int )(cube[3][1]=='y')+ (int )(cube[4][1]=='y');
        // cout<<"sll = "<<sll<<endl;
    }
    

    // cout<<"Second Layer Left "<<endl;


    // return 0;

}
while(FirstLayerLeft(cube) && (!SecondLayerLeft(cube))){

    // do follow these :
    int fll= (int)(cube[0][0]=='w' || cube[1][6]=='w' || cube[4][8]=='w')+ (int)(cube[0][2]=='w' || cube[1][8]=='w' || cube[2][6]=='w')+
                (int)(cube[0][6]=='w'|| cube[4][6]=='w' || cube[3][8]=='w')+ (int)(cube[0][8]=='w' || cube[3][6]=='w' || cube[2][8]=='w');
                //fll counts how many white cornenrs are on the Zeroth (WHITE) face (orientation of these corners isn't accounted for fll)
    

            
    while(cube[1][7]!='g'){
        // cout<<"W0"<<endl;
        W0(cube);
    }
            

    while(fll<4){
    
        while(cube[1][2]=='w'){
            if(cube[2][0]=='o' && cube[5][8]=='g'){
                // Green front, White top
                //Y0 O0 Y1 O1
                // cout<<"Y0 O0 Y1 O1"<<endl;
                Y0(cube);
                O0(cube);
                Y1(cube);
                O1(cube);
                
            }
            else if(cube[2][0]=='r' && cube[5][8]=='b'){
                // Blue front, White top, Rotate Yellow twice to align the white tile
                // Y0 Y0
                // Y0 R0 Y1 R1
                // cout<<"Y0 Y0"<<endl;
                // cout<<"Y0 R0 Y1 R1"<<endl;
                Y0(cube);
                Y0(cube);
                Y0(cube);
                R0(cube);
                Y1(cube);
                R1(cube);
                

            }
            else if(cube[2][0]=='g' && cube[5][8]=='r'){
                // Red front, White top, Rotate Yellow once to align the white tile
                // Y0
                // Y0 G0 Y1 G1
                // cout<<"Y0"<<endl;
                // cout<<"Y0 G0 Y1 G1"<<endl;
                Y0(cube);
                Y0(cube);
                G0(cube);
                Y1(cube);
                G1(cube);

            }
            else if(cube[2][0]=='b' && cube[5][8]=='o'){
                // Orange front, White top, Rotate Yellow once to align the white tile
                // Y1
                // Y0 B0 Y1 B1
                // cout<<"Y1"<<endl;
                // cout<<"Y0 B0 Y1 B1"<<endl;
                Y1(cube);
                Y0(cube);
                B0(cube);
                Y1(cube);
                B1(cube);
            }

            
        }

        while(cube[1][0]=='w'){
            if(cube[5][6]=='o' && cube[4][2]=='g'){
                // Orange front, White top, Rotate Yellow once to align the white tile
                // Y1
                // Y1 G1 Y0 G0
                // cout<<"Y1"<<endl;
                // cout<<"Y1 G1 Y0 G0"<<endl;
                Y1(cube);
                Y1(cube);
                G1(cube);
                Y0(cube);
                G0(cube);

            }
            else if(cube[5][6]=='r' && cube[4][2]=='b'){
                // Red front, White top, Rotate Yellow once to align the white tile
                // Y0
                // Y1 B1 Y0 B0
                // cout<<"Y0"<<endl;
                // cout<<"Y1 B1 Y0 B0"<<endl;
                Y0(cube);
                Y1(cube);
                B1(cube);
                Y0(cube);
                B0(cube);
            }
            else if(cube[5][6]=='g' && cube[4][2]=='r'){
                // Green front, White top
                // Y1 R1 Y0 R0
                // cout<<"Y1 R1 Y0 R0"<<endl;
                Y1(cube);
                R1(cube);
                Y0(cube);
                R0(cube);
            }
            else if(cube[5][6]=='b' && cube[4][2]=='o'){
                // Blue front, White top, Rotate Yellow twice to align the white tile
                // Y0 Y0
                // Y1 O1 Y0 O0  
                // cout<<"Y0 Y0"<<endl;
                // cout<<"Y1 O1 Y0 O0 "<<endl;
                Y0(cube);
                Y0(cube);
                Y1(cube);
                O1(cube);
                Y0(cube);
                O0(cube);

            }



        }

        while(cube[5][0]=='w'){
            // R0 Y1 R1
            // cout<<"R0 Y1 R1"<<endl;
            R0(cube);
            Y1(cube);
            R1(cube);

        }
        if (cube[5][0]!='w' && cube[1][0]!='w' && cube[1][2]!='w' && !SecondLayerLeft(cube)){
            //Y0
            // cout<<"Y0"<<endl;
            Y0(cube);
        }
        fll= (int)(cube[0][0]=='w' || cube[1][6]=='w' || cube[4][8]=='w')+ (int)(cube[0][2]=='w' || cube[1][8]=='w' || cube[2][6]=='w')+
        (int)(cube[0][6]=='w'|| cube[4][6]=='w' || cube[3][8]=='w')+ (int)(cube[0][8]=='w' || cube[3][6]=='w' || cube[2][8]=='w');
    }

    while(fll==4 && !SecondLayerLeft(cube) ) {
        // rotate white corner  to the opposite face 
        if(!((cube[1][6]==cube[1][7]) && (cube[0][0]=='w'))||(cube[1][6] =='w')|| (cube[4][8]=='w')){
            //R1 Y1 R0 
            // cout<<"R1 Y1 R0"<<endl;
            R1(cube);
            Y1(cube);
            R0(cube);
        }
        
        else{
            //W0
            // cout<<"W0"<<endl;
            W0(cube);


        }
        
        fll= (int)(cube[0][0]=='w' || cube[1][6]=='w' || cube[4][8]=='w')+ (int)(cube[0][2]=='w' || cube[1][8]=='w' || cube[2][6]=='w')+
        (int)(cube[0][6]=='w'|| cube[4][6]=='w' || cube[3][8]=='w')+ (int)(cube[0][8]=='w' || cube[3][6]=='w' || cube[2][8]=='w');
    }

    // cout<<"First Layer Left "<<endl;

    cout<<endl;
    cout<<endl;
}

while(!FirstLayerLeft(cube)){

    //Bringing all the white edge pieces on the top (Yellow) face - forming a "Daisy"

    int cll =  (int)(cube[5][1]=='w' || cube[3][1]=='w')+ (int)(cube[5][5]=='w' || cube[2][1]=='w')+
    (int)(cube[5][7]=='w'|| cube[1][1]=='w')+ (int)(cube[5][3]=='w' || cube[4][1]=='w');

    int cll_pro = (int)(cube[5][1]=='w') + (int)(cube[5][5]=='w')+ (int)(cube[5][7]=='w')+ (int)(cube[5][3]=='w');

    int cll_mid = (int)(cube[1][5]=='w' || cube[2][3]=='w')+ (int)(cube[2][5]=='w' || cube[3][3]=='w')+
    (int)(cube[3][5]=='w'|| cube[4][3]=='w')+ (int)(cube[4][5]=='w' || cube[1][3]=='w');

    int cll_bot = (int)(cube[0][1]=='w' || cube[1][7]=='w')+ (int)(cube[0][5]=='w' || cube[2][7]=='w')+
    (int)(cube[0][7]=='w'|| cube[3][7]=='w')+ (int)(cube[0][3]=='w' || cube[4][7]=='w');

    while (cll!=4){
        while (cll_bot!=0){

            //Algorithm
            while(!(cube[1][7]=='w' || cube[0][1]=='w')){
                //W0
                // cout<<"W0"<<endl;
                W0(cube);
            }
            if(cube[1][7]=='w' || cube[0][1]=='w'){
                if(cube[5][7]=='w'  || cube[1][1]=='w'){
                    //W0
                    // cout<<"W0"<<endl;
                    W0(cube);
                    if(cube[5][5]=='w' || cube[2][1]=='w'){
                        //W0
                        // cout<<"W0"<<endl;
                        W0(cube);
                        if(cube[5][1]=='w' || cube[3][1]=='w'){
                            //W0
                            // cout<<"W0"<<endl;
                            W0(cube);
                            if(cube[5][3]=='w' || cube[4][1]=='w'){
                                //W0
                                // cout<<"W0"<<endl;
                                W0(cube);
                            }
                            else {
                                //R0 R0
                                // cout<<"R0 R0"<<endl;
                                R0(cube);
                                R0(cube);
                            }
                        }
                        else {
                            //B0 B0
                            // cout<<"B0 B0"<<endl;
                            B0(cube);
                            B0(cube);
                        }
                    }
                    else {
                        //O0 O0
                        // cout<<"O0 O0"<<endl;
                        O0(cube);
                        O0(cube);
                    }
                }
                else {
                    //G0 G0
                    // cout<<"G0 G0"<<endl;
                    G0(cube);
                    G0(cube);
                }
                
                
                
            }
            

            cll_mid = (int)(cube[1][5]=='w' || cube[2][3]=='w')+ (int)(cube[2][5]=='w' || cube[3][3]=='w')+
            (int)(cube[3][5]=='w'|| cube[4][3]=='w')+ (int)(cube[4][5]=='w' || cube[1][3]=='w');

            cll_bot = (int)(cube[0][1]=='w' || cube[1][7]=='w')+ (int)(cube[0][5]=='w' || cube[2][7]=='w')+
            (int)(cube[0][7]=='w'|| cube[3][7]=='w')+ (int)(cube[0][3]=='w' || cube[4][7]=='w');               
            
        }
        int daisy =0;
        while (cll_mid!=0){
         
            //Algorithm
            for(int i=1;i<=3;i++){
                
                if((cube[i][5]=='w'  ||  cube[(i+1)][3]=='w')){
                    daisy=i;
                }


            }
            if(cube[4][5]=='w'  ||  cube[1][3]=='w'){
                daisy = 4; 
            }
                
                switch(daisy){
                    case 1:
                    if(!((cube[5][7]=='w')  || (cube[1][1]=='w')) ){
                        //G1
                        // cout<<"G1"<<endl;
                        G1(cube);
                    }
                    else if ( !((cube[5][5]=='w')  || (cube[2][1]=='w'))){
                        //O0
                        // cout<<"O0"<<endl;
                        O0(cube);
                    }
                    else {
                        //Y0
                        // cout<<"Y0"<<endl;
                        Y0(cube);
                    }
                    break;
                    case 2:
                    if( !((cube[5][5]=='w')  || (cube[2][1]=='w'))){
                        //O1
                        // cout<<"O1"<<endl;
                        O1(cube);
                    }
                    else if ( !((cube[5][1]=='w')  || (cube[3][1]=='w'))){
                        //B0
                        // cout<<"B0"<<endl;
                        B0(cube);
                    }
                    else {
                        //Y0
                        // cout<<"Y0"<<endl;
                        Y0(cube);
                    }
                    break;
                    case 3:
                    if ( !((cube[5][1]=='w')  || (cube[3][1]=='w'))){
                        //B1
                        // cout<<"B1"<<endl;
                        B1(cube);
                    }
                    else if( !((cube[5][3]=='w')  || (cube[4][1]=='w'))){
                        //R0
                        // cout<<"R0"<<endl;
                        R0(cube);
                    }
                    else {
                        //Y0
                        // cout<<"Y0"<<endl;
                        Y0(cube);
                    }
                    break;
                    case 4:
                    if( !((cube[5][3]=='w')  || (cube[4][1]=='w'))){
                        //R1
                        // cout<<"R1"<<endl;
                        R1(cube);
                    }
                    else if( !((cube[5][7]=='w')  || (cube[1][1]=='w'))){
                        //G0
                        // cout<<"G0"<<endl;
                        G0(cube);
                    }
                    else {
                        //Y0
                        // cout<<"Y0"<<endl;
                        Y0(cube);
                    }
                    break;
                }
           

            cll_mid = (int)(cube[1][5]=='w' || cube[2][3]=='w')+ (int)(cube[2][5]=='w' || cube[3][3]=='w')+
            (int)(cube[3][5]=='w'|| cube[4][3]=='w')+ (int)(cube[4][5]=='w' || cube[1][3]=='w');

            cll_bot = (int)(cube[0][1]=='w' || cube[1][7]=='w')+ (int)(cube[0][5]=='w' || cube[2][7]=='w')+
            (int)(cube[0][7]=='w'|| cube[3][7]=='w')+ (int)(cube[0][3]=='w' || cube[4][7]=='w');
        }

        

        cll =  (int)(cube[5][1]=='w' || cube[3][1]=='w')+ (int)(cube[5][5]=='w' || cube[2][1]=='w')+
        (int)(cube[5][7]=='w'|| cube[1][1]=='w')+ (int)(cube[5][3]=='w' || cube[4][1]=='w');

    }


    //Rearranging the white edge pieces on top (Yellow) face to from a "Daisy"

    while (cll==4 && !FirstLayerLeft(cube)){

        while (cll_pro!=4){

            // R' U F'

            if (cube[5][5]!='w'){
                //Green Front
                // O1 Y0 G1
                // cout<<"O1 Y0 G1"<<endl;
                O1(cube);
                Y0(cube);
                G1(cube);
                
            }

            if (cube[5][1]!='w'){
                //Orange Front
                // B1 Y0 O1
                // cout<<"B1 Y0 O1"<<endl;
                B1(cube);
                Y0(cube);
                O1(cube);
                
            }

            if (cube[5][3]!='w'){
                //Blue Front
                // R1 Y0 B1
                // cout<<"R1 Y0 B1"<<endl;
                R1(cube);
                Y0(cube);
                B1(cube);
                
            }

            if (cube[5][7]!='w'){
                //Red Front
                // G1 Y0 R1
                // cout<<"G1 Y0 R1"<<endl;
                G1(cube);
                Y0(cube);
                R1(cube);
                
            }

            cll_pro = (int)(cube[5][1]=='w') + (int)(cube[5][5]=='w')+ (int)(cube[5][7]=='w')+ (int)(cube[5][3]=='w');
        }

        //Once the "Daisy" is formed, just rotate and send the edge pieces to bottom (White) face
        while(cll_pro==4 && !(FirstLayerLeft(cube))){
            // cout<<"cll pro wala while"<<endl;
            // cout<<"Condition = "<<(cll_pro==4 && !(FirstLayerLeft(cube)))<<endl;
            // cout<<"!FLL = "<<!FirstLayerLeft(cube)<<endl;
            
            //Green
            while (!(cube[1][1]=='g' && cube[5][7]=='w') && !(cube[1][7]=='g' && cube[0][1]=='w')){
                //Y0
                // cout<<"Y0"<<endl;
                Y0(cube);
                
            }
            if(cube[1][1]=='g' && cube[5][7]=='w'){
                //G0 G0
                // cout<<"G0 G0"<<endl;
                G0(cube);
                G0(cube);
            }

            //Orange
            while (!(cube[2][1]=='o' && cube[5][5]=='w') && !(cube[2][7]=='o' && cube[0][5]=='w')){
                //Y0
                // cout<<"Y0"<<endl;
                Y0(cube);
                // cout<<"Orange"<<endl;
            }
            if(cube[2][1]=='o' && cube[5][5]=='w'){
                //O0 O0
                // cout<<"O0 O0"<<endl;
                O0(cube);
                O0(cube);
            }

            //Blue
            while (!(cube[3][1]=='b' && cube[5][1]=='w') && !(cube[3][7]=='b' && cube[0][7]=='w')){
                //Y0
                // cout<<"Y0"<<endl;
                Y0(cube);
                // cout<<"Blue"<<endl;
            }
            if(cube[3][1]=='b' && cube[5][1]=='w'){
                //B0 B0
                // cout<<"B0 B0"<<endl;
                B0(cube);
                B0(cube);
            }

            //Red
            while (!(cube[4][1]=='r' && cube[5][3]=='w') && !(cube[4][7]=='r' && cube[0][3]=='w')){
                //Y0
                // cout<<"Y0"<<endl;
                Y0(cube);
                // cout<<"Red"<<endl;
            }
            if(cube[4][1]=='r' && cube[5][3]=='w'){
                //R0 R0
                // cout<<"R0 R0"<<endl;
                R0(cube);
                R0(cube);
            }

        }
    }

    // cout<<"Stage Zero"<<endl;
}
}
//   012345678

return 0;
}
