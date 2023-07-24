# Validar-CPF-cpp
  Código rápido e meio "espaguetado" de verificação de CPF, não está optimizado para performance nem para economizar espaço, é apenas algo bobinho que eu fiz para testar manipulação de classe em CPP e no final virou apenas uma grande função.

  Criado em forma de Lib, mas pode ser executado por si só se a função "main" for descomentada, o input de cpf é sanitizado e remove os seguintes caracteres {,-.}, logo pode receber inputs como:
  ``` 667.556.317-36 | 66755631736 | 667,556,317,36 ``` etc...

###### *obs: 2 horas após o commit eu percebi que não testei em alguns casos o programa, resultou em erro por ter um = no lugar de +=, aproveitei e coloquei um arquivo main de demonstração, aqui está o pequeno fix


## linux build no CLI
```g++ cpf.cpp cpf.h main.cpp -o cpf```

