var http = require('http');

http.createServer((req,res)=>{
    res.writeHead(200, {'Content-Type':'text/html'});
    res.write('Hello NodeJS');
    res.end();
}).listen(8000);

console.log('ServerRunning');