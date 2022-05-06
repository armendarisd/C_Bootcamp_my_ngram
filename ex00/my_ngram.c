#include <stdio.h>
#include <stdlib.h>

struct { 
  int id;              
  char letter;         
  int ocurrences;   
} A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z, space, comma, punto;  

void initializingArray(int array[]){
       int i = 0;
       while(i < 27){
           array[i] = 0;
           i++;
       }     
}

void initializingStruct(){
  
    a.letter = 'a';
    a.ocurrences = 0;
    A.letter = 'A';
    A.ocurrences = 0;
    
    
    b.letter = 'b';
    b.ocurrences = 0;
    B.letter = 'B';
    B.ocurrences = 0;

    
    c.letter = 'c';
    c.ocurrences = 0;
    C.letter = 'C';
    C.ocurrences = 0;

   
    d.letter = 'd';
    d.ocurrences = 0;
    D.letter = 'D';
    D.ocurrences = 0;


    E.letter = 'E';
    E.ocurrences = 0;
    e.letter = 'e';
    e.ocurrences = 0;


    F.letter = 'F';
    F.ocurrences = 0;
    f.letter = 'f';
    f.ocurrences = 0;

   
    G.letter = 'G';
    G.ocurrences = 0;
    g.letter = 'g';
    g.ocurrences = 0;


    H.letter = 'H';
    H.ocurrences = 0;
    h.letter = 'h';
    h.ocurrences = 0;


    I.letter = 'I';
    I.ocurrences = 0;
    i.letter = 'i';
    i.ocurrences = 0;


    J.letter = 'J';
    J.ocurrences = 0;
    j.letter = 'j';
    j.ocurrences = 0;

    
    K.letter = 'K';
    K.ocurrences = 0;
    k.letter = 'k';
    k.ocurrences = 0;


    L.letter = 'L';
    L.ocurrences = 0;
    l.letter = 'l';
    l.ocurrences = 0;

   
    M.letter = 'M';
    M.ocurrences = 0;
    m.letter = 'm';
    m.ocurrences = 0;


    N.letter = 'N';
    N.ocurrences = 0;
    n.letter = 'n';
    n.ocurrences = 0;


    O.letter = 'O';
    O.ocurrences = 0;
    o.letter = 'o';
    o.ocurrences = 0;

    
    P.letter = 'P';
    P.ocurrences = 0;
    p.letter = 'p';
    p.ocurrences = 0;


    Q.letter = 'Q';
    Q.ocurrences = 0;
    q.letter = 'q';
    q.ocurrences = 0;

    
    R.letter = 'R';
    R.ocurrences = 0;
    r.letter = 'r';
    r.ocurrences = 0;


    S.letter = 'S';
    S.ocurrences = 0;
    s.letter = 's';
    s.ocurrences = 0;


    T.letter = 'T';
    T.ocurrences = 0;
    t.letter = 't';
    t.ocurrences = 0;

    U.letter = 'U';
    U.ocurrences = 0;
    u.letter = 'u';
    u.ocurrences = 0;

    V.letter = 'V';
    V.ocurrences = 0;
    v.letter = 'v';
    v.ocurrences = 0;

    W.letter = 'W';
    W.ocurrences = 0;
    w.letter = 'w';
    w.ocurrences = 0;

    X.letter = 'X';
    X.ocurrences = 0;
    x.letter = 'x';
    x.ocurrences = 0;

    Y.letter = 'Y';
    Y.ocurrences = 0;
    y.letter = 'y';
    y.ocurrences = 0;

    Z.letter = 'Z';
    Z.ocurrences = 0;
    z.letter = 'z';
    z.ocurrences = 0;

    punto.letter = '.';
    punto.ocurrences = 0;
    comma.letter = ',';
    comma.ocurrences = 0;
    space.letter = ' ';
    space.ocurrences = 0;
}

void findOcurrences(int index1, char *argv[]){
    int index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('a' == argv[index1][index2]){
            a.ocurrences++;
        }
        if('A' == argv[index1][index2]){
            A.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('b' == argv[index1][index2]){
            b.ocurrences++;
        }
        if('B' == argv[index1][index2]){
            B.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('c' == argv[index1][index2]){
            c.ocurrences++;
        }
        if('C' == argv[index1][index2]){
            C.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('d' == argv[index1][index2]){
            d.ocurrences++;
        }
        if('D' == argv[index1][index2]){
            D.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('e' == argv[index1][index2]){
            e.ocurrences++;
        }
        if('E' == argv[index1][index2]){
            E.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('f' == argv[index1][index2]){
            f.ocurrences++;
        }
        if('F' == argv[index1][index2]){
            F.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('g' == argv[index1][index2]){
            g.ocurrences++;
        }
        if('G' == argv[index1][index2]){
            G.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('h' == argv[index1][index2]){
            h.ocurrences++;
        }
        if('H' == argv[index1][index2]){
            H.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('i' == argv[index1][index2]){
            i.ocurrences++;
        }
        if('I' == argv[index1][index2]){
            I.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('j' == argv[index1][index2]){
            j.ocurrences++;
        }
        if('J' == argv[index1][index2]){
            J.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('k' == argv[index1][index2]){
            k.ocurrences++;
        }
        if('K' == argv[index1][index2]){
            K.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('l' == argv[index1][index2]){
            l.ocurrences++;
        }
        if('L' == argv[index1][index2]){
            L.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('m' == argv[index1][index2]){
            m.ocurrences++;
        }
        if('M' == argv[index1][index2]){
            M.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('n' == argv[index1][index2]){
            n.ocurrences++;
        }
        if('N' == argv[index1][index2]){
            N.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('o' == argv[index1][index2]){
            o.ocurrences++;
        }
        if('O' == argv[index1][index2]){
            O.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('p' == argv[index1][index2]){
            p.ocurrences++;
        }
        if('P' == argv[index1][index2]){
            P.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('q' == argv[index1][index2]){
            q.ocurrences++;
        }
        if('Q' == argv[index1][index2]){
            Q.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('r' == argv[index1][index2]){
            r.ocurrences++;
        }
        if('R' == argv[index1][index2]){
            R.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('s' == argv[index1][index2]){
            s.ocurrences++;
        }
        if('S' == argv[index1][index2]){
            S.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('t' == argv[index1][index2]){
            t.ocurrences++;
        }
        if('T' == argv[index1][index2]){
            T.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('u' == argv[index1][index2]){
            u.ocurrences++;
        }
        if('U' == argv[index1][index2]){
            U.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('v' == argv[index1][index2]){
            v.ocurrences++;
        }
        if('V' == argv[index1][index2]){
            V.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('w' == argv[index1][index2]){
            w.ocurrences++;
        }
        if('W' == argv[index1][index2]){
            W.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('x' == argv[index1][index2]){
            x.ocurrences++;
        }
        if('X' == argv[index1][index2]){
            X.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('y' == argv[index1][index2]){
            y.ocurrences++;
        }
        if('Y' == argv[index1][index2]){
            Y.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if('z' == argv[index1][index2]){
            z.ocurrences++;
        }
        if('Z' == argv[index1][index2]){
            Z.ocurrences++;
        }
        index2++;
    }
    index2 = 0;
    while(argv[index1][index2] != '\0'){
        if(' ' == argv[index1][index2]){
            space.ocurrences++;
        }
        if('.' == argv[index1][index2]){
            punto.ocurrences++;
        }
        if(',' == argv[index1][index2]){
            comma.ocurrences++;
        }
        index2++;
    }
}

void showResults(){
    if(space.ocurrences > 0){
        printf("%c:%d\n", space.letter, space.ocurrences);
    }

    if(comma.ocurrences > 0){
        printf("%c:%d\n", comma.letter, comma.ocurrences);
    }

    if(punto.ocurrences > 0){
        printf("%c:%d\n", punto.letter, punto.ocurrences);
    }

    if(A.ocurrences > 0){
        printf("%c:%d\n", A.letter, A.ocurrences);
    }

    if(B.ocurrences > 0){
        printf("%c:%d\n", B.letter, B.ocurrences);
    }

    if(C.ocurrences > 0){
        printf("%c:%d\n", C.letter, C.ocurrences);
    }

    if(D.ocurrences > 0){
        printf("%c:%d\n", D.letter, D.ocurrences);
    }

    if(E.ocurrences > 0){
        printf("%c:%d\n", E.letter, E.ocurrences);
    }

    if(F.ocurrences > 0){
        printf("%c:%d\n", F.letter, F.ocurrences);
    }

    if(G.ocurrences > 0){
        printf("%c:%d\n", G.letter, G.ocurrences);
    }
    
    if(H.ocurrences > 0){
        printf("%c:%d\n", H.letter, H.ocurrences);
    }

    if(I.ocurrences > 0){
        printf("%c:%d\n", I.letter, I.ocurrences);
    }

    if(J.ocurrences > 0){
        printf("%c:%d\n", J.letter, J.ocurrences);
    }

    if(K.ocurrences > 0){
        printf("%c:%d\n", K.letter, K.ocurrences);
    }

    if(L.ocurrences > 0){
        printf("%c:%d\n", L.letter, L.ocurrences);
    }

    if(M.ocurrences > 0){
        printf("%c:%d\n", M.letter, M.ocurrences);
    }

    if(N.ocurrences > 0){
        printf("%c:%d\n", N.letter, N.ocurrences);
    }

    if(O.ocurrences > 0){
        printf("%c:%d\n", O.letter, O.ocurrences);
    }

    if(P.ocurrences > 0){
        printf("%c:%d\n", P.letter, P.ocurrences);
    }

    if(Q.ocurrences > 0){
        printf("%c:%d\n", Q.letter, Q.ocurrences);
    }

    if(R.ocurrences > 0){
        printf("%c:%d\n", R.letter, R.ocurrences);
    }

    if(S.ocurrences > 0){
        printf("%c:%d\n", S.letter, S.ocurrences);
    }

    if(T.ocurrences > 0){
        printf("%c:%d\n", T.letter, T.ocurrences);
    }

    if(U.ocurrences > 0){
        printf("%c:%d\n", U.letter, U.ocurrences);
    }

    if(V.ocurrences > 0){
        printf("%c:%d\n", V.letter, V.ocurrences);
    }

    if(W.ocurrences > 0){
        printf("%c:%d\n", W.letter, W.ocurrences);
    }

    if(X.ocurrences > 0){
        printf("%c:%d\n", X.letter, X.ocurrences);
    }

    if(Y.ocurrences > 0){
        printf("%c:%d\n", Y.letter, Y.ocurrences);
    }

    if(Z.ocurrences > 0){
        printf("%c:%d\n", Z.letter, Z.ocurrences);
    }

    if(a.ocurrences > 0){
        printf("%c:%d\n", a.letter, a.ocurrences);
    }

    if(b.ocurrences > 0){
        printf("%c:%d\n", b.letter, b.ocurrences);
    }

    if(c.ocurrences > 0){
        printf("%c:%d\n", c.letter, c.ocurrences);
    }

    if(d.ocurrences > 0){
        printf("%c:%d\n", d.letter, d.ocurrences);
    }

    if(e.ocurrences > 0){
        printf("%c:%d\n", e.letter, e.ocurrences);
    }

    if(f.ocurrences > 0){
        printf("%c:%d\n", f.letter, f.ocurrences);
    }

    if(g.ocurrences > 0){
        printf("%c:%d\n", g.letter, g.ocurrences);
    }
    
    if(h.ocurrences > 0){
        printf("%c:%d\n", h.letter, h.ocurrences);
    }

    if(i.ocurrences > 0){
        printf("%c:%d\n", i.letter, i.ocurrences);
    }

    if(j.ocurrences > 0){
        printf("%c:%d\n", j.letter, j.ocurrences);
    }

    if(k.ocurrences > 0){
        printf("%c:%d\n", k.letter, k.ocurrences);
    }

    if(l.ocurrences > 0){
        printf("%c:%d\n", l.letter, l.ocurrences);
    }

    if(m.ocurrences > 0){
        printf("%c:%d\n", m.letter, m.ocurrences);
    }

    if(n.ocurrences > 0){
        printf("%c:%d\n", n.letter, n.ocurrences);
    }

    if(o.ocurrences > 0){
        printf("%c:%d\n", o.letter, o.ocurrences);
    }

    if(p.ocurrences > 0){
        printf("%c:%d\n", p.letter, p.ocurrences);
    }

    if(q.ocurrences > 0){
        printf("%c:%d\n", q.letter, q.ocurrences);
    }

    if(r.ocurrences > 0){
        printf("%c:%d\n", r.letter, r.ocurrences);
    }

    if(s.ocurrences > 0){
        printf("%c:%d\n", s.letter, s.ocurrences);
    }

    if(t.ocurrences > 0){
        printf("%c:%d\n", t.letter, t.ocurrences);
    }

    if(u.ocurrences > 0){
        printf("%c:%d\n", u.letter, u.ocurrences);
    }

    if(v.ocurrences > 0){
        printf("%c:%d\n", v.letter, v.ocurrences);
    }

    if(w.ocurrences > 0){
        printf("%c:%d\n", w.letter, w.ocurrences);
    }

    if(x.ocurrences > 0){
        printf("%c:%d\n", x.letter, x.ocurrences);
    }

    if(y.ocurrences > 0){
        printf("%c:%d\n", y.letter, y.ocurrences);
    }

    if(z.ocurrences > 0){
        printf("%c:%d\n", z.letter, z.ocurrences);
    }
}

int main (int argc, char *argv[]) {
initializingStruct();

int i = 1;
while(i < argc){
    findOcurrences(i, argv);
    i++;
}

showResults();

    return(0);
}

