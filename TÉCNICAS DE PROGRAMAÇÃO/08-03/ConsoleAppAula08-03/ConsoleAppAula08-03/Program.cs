using System;

/*     Exemplo de codigo em C#.      */

namespace ConsoleAppAula08_03
{
	class Program
	{
		static void Main(string[] args)
		{
			// controle de repetição
			const int limite = 5; //constante
			int i; //apenas uma variável comum int
			double a, b, c, d, e, f, soma; //apenas algumas variáveis comuns double
			double media; //apenas algumas variáveis comuns double

			//guarda o numero na variável a
			Console.Write("Digite um valor para A: ");
			a = Convert.ToDouble(Console.ReadLine()); //conversão explícita

			//guarda o numero na variável b
			Console.Write("Digite um valor para B: ");
			b = Convert.ToDouble(Console.ReadLine());

			//guarda o numero na variável c
			Console.Write("Digite um valor para C: ");
			c = Convert.ToDouble(Console.ReadLine());

			//guarda o numero na variável d
			Console.Write("Digite um valor para D: ");
			d = Convert.ToDouble(Console.ReadLine());

			//guarda o numero na variável e
			Console.Write("Digite um valor para E: ");
			e = Convert.ToDouble(Console.ReadLine());

			//guarda o numero na variável f
			Console.Write("Digite um valor para F: ");
			f = Convert.ToDouble(Console.ReadLine());

			//soma os números
			soma = a + b + c + d + e + f;
			i = (int)soma; //conversao explícita
			soma = i;      //conversão implícita
						   //faz a média
			media = (soma / 6.0f);

			//mostra no console a variável soma
			Console.WriteLine("soma = " + soma);
			Console.WriteLine("média = " + media);

			/*
			
			 Operadores aritméticos
			+ soma
			* multiplicação
			/ divisão
			- subtração
			% resto de divisão
			 
			operadores relacionais (true ou false)
			>= maior e igual
			<= menor e igual
			> maior
			< menor
			= recebe
			== igual
			!= diferente

			operadores lógicos
			&&          e
			||          ou
			^           ou exclusivo

			 */

		}
	}
}
