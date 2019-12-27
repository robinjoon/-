import java.util.*;

public class Main{
    public static void main(String[] args){
        int a,b,v;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        v = sc.nextInt();

        int t = (v-a) / (a-b) + 1;
        if((t-1)*(a-b)+a <v){
            System.out.print(t+1);
        }else
            System.out.print(t);
    }
}
/*
꼭대기에 도달하는 날에는 밤이 되기 전에 상황이 종료된다. 
따라서, 막대 꼭대기까지 올라가는데 t일이 걸린다면, 올라갔다 미끄러지는 것(a-b)를 (t-1)회 반복하고,
a 만큼 올라가면 꼭대기에 도달하게 된다.
즉,  v = (t-1)*(a-b) + a 라는 식을 만족하는 t가 답이다.
따라서, 
t  = (v-a) / (a-b) + 1 이다. 
이때. t 는 올림해주어야 한다.
*/