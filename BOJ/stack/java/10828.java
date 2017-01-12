import java.util.Scanner;

class Stack {
    private int[] data = new int[10000];
    private int size;

    public Stack() {
        this.size = 0;
    }

    public void push(int num) {
        this.data[size] = num;
        this.size += 1;
    }

    public int empty() {
        if(this.size == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    public int pop() {
        if(this.empty() == 1) {
            return -1;
        } else {
            this.size -= 1;
            return this.data[this.size];
        }
    }

    public int top() {
        if(this.empty() == 1) {
            return -1;
        } else {
            return this.data[this.size-1];
        }
    }

    public int size() {
        return this.size;
    }
}

class Main {
    public static void main(String[] args) {
        int N;
        int num;
        String cmd = null;
        Scanner sc = new Scanner(System.in);
        Stack st = new Stack();

        N = sc.nextInt();

        for(int i = 0; i < N; i++) {
            cmd = sc.next();
            if(cmd.equals("push")){
                num = sc.nextInt();
                st.push(num);
            } else if(cmd.equals("pop")) {
                System.out.println(st.pop());
            } else if(cmd.equals("top")) {
                System.out.println(st.top());
            } else if(cmd.equals("size")) {
                System.out.println(st.size());
            } else {
                System.out.println(st.empty());
            }
        }
    }
}
