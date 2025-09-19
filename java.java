// Работа с массивами и стеком в Java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Массив
        int[] arr = {1, 2, 3, 4, 5};
        System.out.println("Массив:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Стек
        Stack<Integer> stack = new Stack<>();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println("Стек: " + stack);

        stack.pop();
        System.out.println("После pop: " + stack);
    }
}
