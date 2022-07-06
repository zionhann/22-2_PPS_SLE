package com.baekjoon;

import java.util.*;
import java.io.*;

public class Main {

    public static class Node{
        int element;
        Node left;
        Node right;

        public Node(int val){
            element = val;
            left = null;
            right= null;
        }
    }

    public static class BinaryTree {
        Node rootNode = null;

        public void insertNode(int element) {

            if(rootNode == null) {
                rootNode = new Node(element);
                return;
            }

            Node head = rootNode;
            Node currentNode;

            while(true) {
                currentNode = head;

                if(head.element < element) {
                    head = head.right;
                    if(head == null){
                        currentNode.right = new Node(element);
                        break;
                    }
                }
                else {
                    head = head.left;
                    if(head == null) {
                        currentNode.left = new Node(element);
                        break;
                    }
                }
            }
        }

        public void postOrderSearch(Node root) {
            if(root != null) {
                postOrderSearch(root.left);
                postOrderSearch(root.right);
                System.out.println(root.element);
            }
        }

    }

    static int MAX = 10000;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        BinaryTree bt = new BinaryTree();

        String str;
        int[] arr = new int[MAX];
        int i= 0;

        while(true) {
            str = br.readLine();
            if(str == null)
                break;
            if(str.length() <=0 )
                break;
            arr[i++] = Integer.parseInt(str);
        }

        for(int k: arr) {
            if( k==0 )
                break;
            bt.insertNode(k);
        }
        bt.postOrderSearch(bt.rootNode);

        br.close();
    }
}
