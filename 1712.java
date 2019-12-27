import java.util.*;
public class Main{
    public static void main(String[] args){
        long a,b,c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextLong();
        b = sc.nextLong();
        c = sc.nextLong();
        long i = 1;
        if(b>=c){
            System.out.print("-1");
        }else{
        while(true){
            if(a+b*i<c*i)break;
            i++;
        }
        System.out.print(i);
        }
    }
}
/*
문제를 해석하면 결국,
A + N*B < N*C 를 만족하는 최소의 정수 N 을 구하면 된다.
따라서 
A < N(C-B)
A / (C-B) < N 이 되는 N이 정답이다.
N은 자연수이므로 , C <= B 라면 N이 존재하지 않아 -1을 출력하면 된다.
*/