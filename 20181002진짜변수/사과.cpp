#include<stdio.h>
int main(){
//============ 이 위는 당분간 무시
	
	//변수 선언문 (자료형 변수이름;) : 1. 변수의 이름 소개 2. 변수의 자료형 지정
	//int ==> 자료형, a ==> 변수이름
	//변수 : 메모리 저장장소의 이름
	//자료형: 변수가 가질 수 있는 값의 범위를 지정
	//C언어에서는 변수를 사용하기 전에 반드시 변수 선언을 해야한다.
	//문장 : ;으로 끝난다. 

	int a; // 변수 선언문 : 1. a는 변수의 이름이다. 2. 변수 a의 자료형은 int 이다.
	float ff; // 소수점 숫자(실수) 표현



	//대입문 : 우변의 "값"을 좌변의 저장장소로 이동(저장)한다.
	//리터럴(literal) : 소스코드에서 특정한 자료형의 값을 직접 표현하는 방법. 10 이  literal임.
	//(예) 정수형 : 10,0xF3; 실수형 : 3.14, 10f; 0.1E-5 ; 문자형 : 'a',\n; 문자열 : "hello world"
	a= 10; //a=0xA 

	int b = 20, c; //변수 b와 c 선언 + 변수 b를 20으로 초기화

	// 변수와 자료형은 메모리와 연관 수식은 연산과 연관. 조건반복문은 순서제어(컴퓨터의 기능)


	//수식(expression): 연산자와 피연산자들의 조합. 
	//모든 수식은 값을 반환(리턴)한다.(@@@@@@중요@@@@@@)

	c= a+b; //+,=는 연산자(operator) : 연산을 수행하는 기호, a는 피연산자(operand) , a+b해서 값을 리턴하여 그 값을 c에 저장. 

	//대입연산자
	a=b=c=100; // = 얘도 연산자다 대입연산자. 

	//증감연산자
	 b=10;
	 a=b++;// b++: 반환값 ==> b, 부수효과 ==> b=b+1
	 //a ->10 , b-> 11

	 b=10;
	 a=++b;// ++b: 반환값 ==> b+1, 부수효과 ==> b=b+1
	 //a -> 11, b -> 11


	 //관계연산자 : < > <= >= == !=
	a=10;
	b=20;
	c=a>b;//연산결과 참 c -> 1
	c=a<b;//연산결과 거짓 c -> 0


	// 논리연산자 : &&(and) ||(or) !(not) C언어는 boolean없다.
	
	// C언어에서 논리연산자의 피연산자가 0이면 거짓, 0이 아니면 참으로 처리한다.

	a = 1&&0; // a -> 0
	a = 1 || 0; // a -> 1

	// 논리식의 결과가 참이면 1 거짓이면 0 , 0 이 아닌 것은 무조건 참

	a= 100 || 0; // a -> 1 ,0은 무조건 false. 


	//연산자 우선순위 ( operator prededence)
	a= 10 + 20 *3; // 연산자 3개 , 곱하기먼저 더하기 그다음 대입
	a = (1 ||( (3 *4) >10)); // 곱하기 먼저 관계연산자 (>) 먼저 논리 연산자 (||) 세번째 대입이 네번째,사이트의 표. 위에있는게 먼저할거


	//연산자 결합방향(Associativity)
	a=10+20+30; // 대부분 왼쪽에서 오른쪽 방향 첫번째 +먼저 다음 +, 예외(오른쪽에서 왼쪽) : 대입연산자, 단항연산자


	// 조건문(Conditional Statement)
	a = 10;

	//조건문 시작
	if( a == 10){ // 조건식 참이면 밑에거 실행 거짓이면 밑밑, if하나만 있어도됨. 
		printf("a is ten\n");
		printf("is this a real life \n");
	}  //if 중괄호 안 논리적으로 한문장. 여러개의 문장을 하나의 문장으로 처리 (복합문)

	else if ( a == 20) printf ("a is twenty\n");


	else 
		printf("a is not ten\n"); //문장 한 문장이면 중괄호 없어도 됨.

	// 조건문 시작에서 끝 1문장
	//조건문 끝



	//키보드 입력받는 방법
	printf("정수를 입력하시오 : ");
	scanf("%d",&a);

	printf ("a = %d \n",a);


	printf("program end!!!!!!!\n"); // 조건이랑 관계없이 무조건 실행.
	//printf("a = %d \n",a); //%d (decimal) 이 자리에 콤마뒤의 값을 넣는다. 십진수의 값 %x넣으면  16진수 나옴 1e(16+14)
	



//============ 이 아래도 당분간 무시
	return 0;
}