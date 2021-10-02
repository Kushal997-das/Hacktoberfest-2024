/* Question : Tower of hanoi..*/
# include <iostream>
using namespace std;

void HanoiTower(int n, char src, char dest, char helper)
{

    if(n==0)    //base case
    {
        return;
    }
    HanoiTower(n-1,src,helper,dest);
    cout<<"Mover from "<< src <<" to "<<dest<<endl;
    HanoiTower(n-1,helper,dest,src);
}

int main()
{
    HanoiTower(5,'A','C','B');
    return 0;
}
