#include <bits/stdc++.h>

using namespace std;

typedef struct Cell{
    int value;
    bool pocket=false;
    int num;
    Cell* next;

    
}Cell;

Cell* initcell(int value, bool pocket, int num){
    Cell* cell = new Cell();
    cell->value = value;
    cell->pocket = pocket;
    cell->num = num;
    cell->next = NULL;
    return cell;
}

bool is_pocket(int *pockets, int n, int index){
    for(int i = 0; i < n; ++i){
        if(pockets[i] == index){
            return true;
        }
    }
    return false;
}

Cell* remove(Cell* head, int value){
    Cell* rm = head;
    if(head == NULL){
        return NULL; 
    }else if(head->next == NULL || head->value == value){
        head = head->next;
        return head;
    }else{
        Cell* tmp = head, *node = head;
        while(tmp){
            if(tmp->value == value){
                node->next = tmp->next;
                break;
            }else{
                node = tmp;
                tmp = tmp->next;
            }
        }
        return head;
    }
}

void setPockets(int* pockets, int n, Cell* head){
    Cell* tmp = head;
    int i = 0;
    while(tmp){
        if(is_pocket(pockets, n, i)){
            tmp->pocket = true;
        }
        i++;
        tmp = tmp->next;
    }
}

void filter(int x, int k, int *pockets, int n){
    Cell *head = initcell(0, false, 0);
    Cell* tmp = head;
    for(int i = 1; i < 100000; ++i){
        tmp->next = initcell(i, false, i);
        tmp = tmp->next;
    }

    setPockets(pockets, n, head);

    

    for(int i = 0; i < k; ++i){
        Cell* c = head;
        while(c){
            if(c->pocket == true){
                // remove cell
                head = remove(head, c->value);
            }
            c = c->next;
        }
        setPockets(pockets, n, head);
    }

    Cell* t = head;
    int i = 0;
    while(t){
        if(i == x){
            cout << t->value << endl;
        }
        i++;
        t = t->next;
    }

    Cell list[100000];
    for(int i = 0; i < 100000; ++i){
        list[i].value = i;
        list[i].pocket = false;
    }
    for(int i = 0; i < n; ++i){
        list[pockets[i]].pocket = true;
    }
    for(int i = 0; i < k; ++i){
        for(int j = 0; j < 100000; ++j){
            if(list->pocket){
                
            }
        }
    }
}


int main(){
    int n, m, i=0;
    cin >> n >> m;
    int pockets[n];

    for(int i = 0; i < n; ++i){
        cin >> pockets[i];
    }

    for(int i = 0; i < m; ++i){
        int x, k;
        cin >> x >> k;
        filter(x, k, pockets, n);
    }

    return 0;
}
