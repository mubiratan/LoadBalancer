# LoadBalancer
Load Balancer

Simples exemplo de um Load Balancer.

Resumo: Load Balancer que aguarda requisição vinda de um websocket.

- Execute o código normalmente;
- Em um browser, acesse um client de websocket e conecte-se: ws://127.0.0.1:8083/;
- Digite algum texto e envie;
- Na console irá exibir os 3 servidores e a quantidade de requisições;
- Para cada nova requisição, um servidor com menos requisições é escolhido.
