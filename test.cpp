#include <bits/stdc++.h>

// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

using namespace std;

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)


void XOR(string str, int loops, int modulo, vector<int>hex){
    for(int i=0; i<=loops; ++i){
        int mod = i%modulo;
        str[i] ^= hex[mod];
    }
}

void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--){
        cout << str[i];
    }
        
}




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = {0x60, 0x95, 0x02, 0x8d, 0x78, 0x85, 0x02, 0x83, 0x7c, 0x97, 0x12, 0x97, 0x67, 0x80, 0x07, 0x81, 0x7e, 0x97, 0x04, 0x87, 0x60, 0x9e, 0x1f, 0x86, 0x70};

    

    // char c = s[14];
    // s[14] = s[15];
    // s[15] = c;

    // string s = "`...x...|...g...~...`...p.";
    // string s = "9.1.4 ).<.1.'.4.$.9.?.:.#.#.4.0.6.6...*.";
    // string s = {0x39, 0x0f, 0x31, 0x0e, 0x34, 0x20, 0x29, 0x06, 0x3c, 0x08, 0x31, 0x09, 0x27, 0x09, 0x34, 0x0f, 0x24, 0x08, 0x39, 0x0e, 0x3f, 0x06, 0x3a, 0x0a, 0x23, 0x17, 0x23, 0x0f, 0x34, 0x1c, 0x30, 0x1d, 0x36, 0x0a, 0x36, 0x0d, 0x02, 0x12, 0x2a};

    // cout << s.size() << endl;

    // // reverse
    // for (int i = 0; i <= 18; i = i + 1){
    //     char r = s[i];
    //     s[i] = s[38-i];
    //     s[38-i] = r;
    // }
    // // swap 
    // char c = s[2];
    // s[2] = s[33];
    // s[33] = c;

    // XOR
    
    // for(int i=0; i<=24; ++i){
    //     int mod = i%4;
    //     if(mod==3){
    //         s[i] ^= 0x12;
    //     }
    //     else if(mod==2){
    //         s[i] ^= 0xfb;
    //     }
    //     else if(mod==1){
    //         s[i] ^= 0x11;
    //     }
    //     else if(mod==0){
    //         s[i] ^= 0x9d;
    //     }
    // }

    XOR(s, 24, 4, {0x9d, 0x11, 0xfb, 0x12});
    reverse(s);
    XOR(s, 24, 2, {0x8c, 0xf7});

    // // reverse
    // for (int i = 0; i <= 11; ++i){
    //     char r = s[i];
    //     s[i] = s[24-i];
    //     s[24-i] = r;
    // }

    // // XOR
    // for(int i=0; i<=24; ++i){
    //     int mod = i%2;
    //     if(mod==1){
    //         s[i] ^= 0xf7;
    //     }
    //     else if(mod==0){
    //         s[i] ^= 0x8c;
    //     }
    //     // else if(mod==1){
    //     //     s[i] ^= 0x11;
    //     // }
    //     // else if(mod==0){
    //     //     s[i] ^= 0x9d;
    //     // }
    // }






    cout << s;
    return 0;
}


// \subsection{MPC-based Federated Learning}
// Figure~\ref{figure:mpcfl-const} presents the framework of MPC-based Federated Learning.  
//  \begin{figure*}[h]\centering 
//  	%\small{
// 		\framebox{
// 			\begin{minipage}{0.95\textwidth}
// 				{\textsc{ Inputs: }}
// 				\begin{itemize}[noitemsep,nolistsep]
// 					\item Each client $\client_{i \in [n]}$ has private database $D_i=\{d^{(1)}_i, \ldots, d^{(m)}_i \}$.
// 					\item  Each cloud server $\server_i$ has no input.
// 				\end{itemize}
// 				\medskip
				
// 				{\textsc{ Protocol:}}
// 				\begin{enumerate}[noitemsep,nolistsep]
// 				\item \textbf{Client NN training on private dataset:} 
				
// 				\begin{itemize}
// 				    \item Each client $\client_i$ begins by computing the first $l$ layers of their respective NN locally, where 1 $\leq$ $l$ $<$ the number of layers in the neural network. 
// 				    \item The output of the training on the first $n$ layers of the NN results in a new layer $H$. Each $h[i]$ $\in$ $H$ is a node in the layer defined as $g(f({d^{(j)}_i}\sh{W}))$ where \textit{linear function} $f$ is composed with a \textit{non-linear activation function} $g$ and a matrix weight $W$.
// 				\end{itemize}
// 				\item \textbf{Distribution of client training output:} 
				
// 				\begin{itemize}
// 				    \item Each client $\client_i$ securely distributes its private training output $H_i$ among two servers $S_1$ and $S_2$. For each output vector $h^{(j)}_i$ $\in$ $H_i$, the $\client_i$ chooses a secret vector $\sh{x^{(j)}_i}_1$ uniformly at random, and computes $\sh{x^{(j)}_i}_2 = h^{(j)}_i - \sh{x^{(j)}_i}_1$. The $\client_i$ sends secret shares $\sh{x^{(j)}_i}_1$ and  $\sh{x^{(j)}_i}_2$ to $S_1$ and $S_2$, respectively. 
// 				    \item Each server $S_{k \in \{1,2\}}$ 
// inserts the obtained vector $\sh{x^{(j)}_i}_k$ to the set $X_k$ in order, where $X_{k \in \{1,2\}}$ are initialized as empty.
// 				\end{itemize}
// 				\item \textbf{NN training on secret-shared training output:} Given secret-shared NN training output $X_k=\{\sh{x^{(j)}_i}_k \mid i \in [n], j \in [m]\}$,  				
				
// 				\begin{itemize}
// 				    \item Two servers $\server_1$ and $\server_2$ securely compute each node of the remaining layers as $g(f(\sh{x^{(t_i)}})):=g(\sh{x^{(t_i)}} \sh{W})$ where a matrix weight $W$ is also secretly shared between the two servers. 
// 				    \item The outputs of each node are secretly shared, and then forwarded as inputs to the next layer of the network until all layers have been evaluated in this manner.  
// 				\end{itemize}
// 				\item \textbf{NN's parameters decryption:} After the training has reached a predetermined epoch number or accuracy condition the training is concluded. Assume now that the servers obtain the secret-shared NN's parameters $\sh{\theta_d}$. Each server $S_{k\in [2]}$ sends its $\sh{\theta_d}_{k\in [2]}$ to the client $\client_i$ which outputs NN's  parameters by computing $\theta_d \from \sh{\theta_d}_1+\sh{\theta_d}_2$ locally. 
			
// 				\end{enumerate}
// 			\end{minipage}
// 		}
// 		\caption{MPC-based Federated Learning Framework}  
// 		\label{figure:mpcfl-const}
// %	}
// \end{figure*}