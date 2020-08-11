#include <iostream>
using namespace std;

struct bin
{
    int valve;
    int bushing;
    int bearing;
    int coupling;
    int flange;
    int gear;
    int gear_housing;
    int vacuum_gripper;
    int cable;
    int rod;

    bin()
    {
        valve = 10;
        bushing = 5;
        bearing = 15;
        coupling = 21;
        flange = 7;
        gear = 5;
        gear_housing = 5;
        vacuum_gripper = 25;
        cable = 17;
        rod = 12;
    }
};

bin add(bin data)
{
    int sel=1, value, temp;

    while( sel != 0 )
    {
        cout<<"\nTo add parts in each please select :";
        co;;[;]ut<<"\n1-Valve \t 2-Bushing";
        cout<<"\n3-Bearing \t 4-Coupling";
        cout<<"\n5-Flange \t 6-Gear";
        cout<<"\n7-Gear Housing \t 8- Vacuum Gripper";
        cout<<"\n9-Cable \t 10-Rod";
        cout<<"\n0 to exit:";
        cin>>sel;

        if(sel==0)
        {
            break;
        }
        if(sel==1)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;

            temp = data.valve + value;

            if(temp <= 30)
            {
                data.valve = temp;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==2)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.bushing <= 30)
            {
                data.bushing = data.bushing + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==3)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.bearing <= 30)
            {
                data.bearing = data.bearing + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==4)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.coupling <= 30)
            {
                data.coupling = data.coupling + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==5)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.flange <= 30)
            {
                data.flange = data.flange + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==6)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.gear <= 30)
            {
                data.gear = data.gear + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==7)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.gear_housing <= 30)
            {
                data.gear_housing = data.gear_housing + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==8)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.vacuum_gripper <= 30)
            {
                data.vacuum_gripper = data.vacuum_gripper + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==9)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.cable <= 30)
            {
                data.cable = data.cable + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else if(sel==10)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.rod <= 30)
            {
                data.rod = data.rod + value;
            }
            else
            {
                cout<<"\nItems exceeded";
            }
        }
        else
        {
            cout<<"\nInvalid option, Please enter again :";
        }
    }
    return data;
}

bin remove_item(bin data)
{
    int sel=1, value;

    while( sel != 0 )
    {
        cout<<"\nTo remove parts in each please select :";
        cout<<"\n1-Valve \t 2-Bushing";
        cout<<"\n3-Bearing \t 4-Coupling";
        cout<<"\n5-Flange \t 6-Gear";
        cout<<"\n7-Gear Housing \t 8- Vacuum Gripper";
        cout<<"\n9-Cable \t 10-Rod";
        cout<<"\n0 to exit:";
        cin>>sel;

        if(sel==0)
        {
            break;
        }
        if(sel==1)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.valve > 0)
            {
                data.valve = data.valve - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==2)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.bushing > 0)
            {
                data.bushing = data.bushing - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==3)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.bearing > 0)
            {
                data.bearing = data.bearing - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==4)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.coupling > 0)
            {
                data.coupling = data.coupling - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==5)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.flange > 0)
            {
                data.flange = data.flange - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==6)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.gear > 0)
            {
                data.gear = data.gear - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==7)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.gear_housing > 0)
            {
                data.gear_housing = data.gear_housing - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==8)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.vacuum_gripper > 0)
            {
                data.vacuum_gripper = data.vacuum_gripper - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==9)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.cable >0)
            {
                data.cable = data.cable - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else if(sel==10)
        {
            cout<<"\nEnter value you want to add :";
            cin>>value;
            if(data.rod >0)
            {
                data.rod = data.rod - value;
            }
            else
            {
                cout<<"\nItems reached to lowest limit";
            }
        }
        else
        {
            cout<<"\nInvalid option, Please enter again :";
        }
    }

    return data;
}

void print(bin data)
{
        cout<<"\n1-Valve :" <<data.valve <<" \t 2-Bushing :" <<data.bushing;
        cout<<"\n3-Bearing :" <<data.bearing <<" \t 4-Coupling :" <<data.coupling;
        cout<<"\n5-Flange :" <<data.flange <<" \t 6-Gear :" <<data.gear;
        cout<<"\n7-Gear Housing :" <<data.gear_housing <<" \t 8- Vacuum Gripper :" <<data.vacuum_gripper;
        cout<<"\n9-Cable :" <<data.cable <<" \t 10-Rod :" <<data.rod;
}

int main()
{
    bin part[10];
    int sel=1, choice;

    while(sel != -1)
    {
        cout<<"\nSelect a bin from 0 to 9 and -1 to exit :";
        cin>>sel;

        if( sel== -1 )
        {
            break;
        }

        cout<<"\nEnter 1 to add parts and 2 to remove parts :";
        cin>>choice;
        if( choice ==1 )
        {
            part[sel] = add(part[sel]);
        }
        if(choice == 2 )
        {
            part[sel] = remove_item(part[sel]);
        }

        print(part[sel]);
    }
}
