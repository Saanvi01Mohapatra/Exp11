// Saanvi
// Prn: 23070123110
// Experiment 11:
using namespace std;
class cube{
    public:
    double height=2.6;
    double width=3.2;
    double length=5.8;
     double volume(){
     double v;
     v=height*width*length;
        return v;
}
void disp_vol(double vol){
    cout<<"Volume:"<<vol<<endl;

}
};
int main()
{
    cube cube1;
    double vol=cube1.volume();
    cube1.disp_vol(vol);
}