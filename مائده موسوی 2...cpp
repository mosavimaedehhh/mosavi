
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 main() {
    int  num1,num2,result;
    char op;
	cout << "please enter expression : ";
    cin >> num1 >> op >> num2;
    switch (op){
    	case '+' :
    		result = num1 + num2;
    		break; case '-' :
    			result = num1 - num2;
    			break; case '*' :
    				result = num1 *num2;
    				break; case '/' :
    					result= num1 / num2;
    					break; case '%' :
    						result = num1 % num2;
    						
	}
}
cout << result;