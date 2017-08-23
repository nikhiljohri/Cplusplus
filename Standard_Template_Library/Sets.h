// Name: Nikhil Johri
// Summary:

#include <iostream>
#include<stack>
#include<queue>
int timer=0;
#define MAX_N 100
using namespace std;
// Tests depend on the input and output formats.
// Remove any additional cin/cout/printf/scanf before submission.

struct Trolley
{
    int id;
    int arrivalTime;
    int numberOfBoxes;
};


static int emptyTrolleys(Trolley trolleys[], int n, int i, int order[])
{
	int order_count=0;
	int sum=0;
	int total_time;
	int cur_box=1000;
	Trolley next;
	char q;
	stack<Trolley> cur_trolley;
	queue<Trolley> fut_trolley;
	queue<Trolley> all_trolley;
	
	for(int i=0;i<n;i++)
	{
		sum=sum+trolleys[i].numberOfBoxes;
		all_trolley.push(trolleys[i]);
	}
	for(int i=0;i<sum;i++)
	{
		Trolley all_front=all_trolley.front;
		Trolley fut_front=fut_trolley.front;
		if ((all_trolley.empty)&&(!fut_trolley.empty)) 
		{
			next=fut_front;
			q='f';
		}
		else if((fut_trolley.empty)&&(!all_trolley.empty))
		{
			next=all_front;
			q='a';
		}
		else if(all_front.arrivalTime>timer)
		{
			next=fut_front;
			q='f';
		}
		else if((all_front.arrivalTime==timer) && (all_front.numberOfBoxes>fut_front.numberOfBoxes))
		{
			next=fut_front;
			q='f';
		}
		else if((all_front.arrivalTime==timer) && (all_front.numberOfBoxes<fut_front.numberOfBoxes))
		{
			next=all_front;
			q='a';
		}
		Trolley temp;
		if((next.numberOfBoxes<cur_box))
		{
			if(q=='f')
			{
				fut_trolley.pop;
			    cur_trolley.push(next);
			}
			if(q=='a')
			{
				all_trolley.pop();
				cur_trolley.push(next);
			}

		}

		
		temp=cur_trolley.top;
		temp.numberOfBoxes--;
		if(temp.numberOfBoxes==0)
		{
			if(temp.id==i)
			{
				total_time=timer+1;
			}
			order[order_count]=temp.id;
			cur_trolley.pop();
			order_count++;
		}

		timer++;
		
	}


    // Your code goes here
    
	return total_time;
}

int main()
{
    int n;
    cin >> n;
    Trolley trolleys[n];
    for(int c = 0; c < n; ++c)
    {
        trolleys[c].id = c;
        cin >> trolleys[c].arrivalTime;
        cin >> trolleys[c].numberOfBoxes;
    }
    int i;
    cin >> i;

    int order[n];
    int timeElapsedForI = emptyTrolleys(trolleys, n, i, order);
    cout << timeElapsedForI << " ";
    for(int i = 0; i < n; ++i) 
    {
        cout << "T" << order[i] << " ";
    }
}
