// Padrão de códigos assim: Variáveis, setup, loop.

// Acima do setup, são definidas as váriaveis utilizadas.

void setup(){ //Setup, aqui são definidas as execuções únicas(só vão ocorrer uma vez). Além das "Configurações" do código, como declarações de funções e os objetivos em questão.
  
//Exemplos de Keywords: HIGH, LOW, OUTPUT, public, private, main, if, else...
//Funções padrão: Serial.beggin(Parâmetro da velocidade de transmissão em bits, varia de acordo com o componente); , pinMode(nLEDs,OUTPUT);
//Dicas -> "Serial" e "digital" dizem respeito ao tipo de tela do sistema ligado. 
  
  Serial.begin(9600); // Serial configurado.
  pinMode(pinoLED, OUTPUT);
  
}

void loop(){ //Aqui a mágica acontece, dentro do "loop", os comandos ocorrem repetidas vezes, um medidor de temperatura declarado aqui fará o monitoramento constantemente, por exemplo.
  
//Este código faz um LED piscar, acendendo e apagando.
  
   digitalWrite(pinoLED, HIGH); //HIGH significa passagem de energia, ou seja, liga o LED.
   Serial.println("LED está aceso."); //Mensagem de status para o usuário.
  delay(1000); 
 
  digitalWrite(pinoLED, LOW); //LOW significa "pouca" ou "nada" de energia, ou seja, o LED desliga.
  Serial.println("LED está apagado.");
  delay(1000); //Entre () está o tempo de ativação das execuções, medidos em milissegundos (1 segundo no exemplo).
}

