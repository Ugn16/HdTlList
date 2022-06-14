#include "HeadTail.h"

int main()
{
    HdTlList MyList;
    MyList.push_front(1000);
    MyList.DisplayAll();
    MyList.push_back(1);
    

    MyList.push_back(10);
    MyList.push_back(11);
    MyList.push_back(12);
    MyList.push_back(13);
    MyList.push_front(0);
    MyList.push_front(-10);
    MyList.DisplayAll();
    
    cout << " 6 Element >> " << MyList[6] << endl;
    cout << endl;
    MyList.insert(33, 3);
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n\n";

    
    MyList.pop_front();
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";

    MyList.pop_back();
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";

    MyList.insert(333, 5);
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";
    cout << "\n\n";
    
    MyList.insert(33, 6);
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";
    //
    MyList.removeAt(3);
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";

    MyList.insert(333, 5);
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";
    cout << "\n";

    MyList.removeAt(5);
    cout << " Size >>> " << MyList.getSize() << endl;
    MyList.DisplayAll();
    cout << "\n";
   
    cout << "\n";
}

