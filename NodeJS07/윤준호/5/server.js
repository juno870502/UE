var http = require('http');
var fs = require('fs');
var querystring = require('querystring');

function onRequest(req,res) {
    // Get요청인지 Post요청인지 확인
    var method = req.method;
    switch (method) {
        case 'GET':
            fs.readFile('./index.html', (err, html)=>{
                res.writeHead(200, {'Content-Type':'text/html'});
                res.write(html);
                res.end();
            })    
            break;
        case 'POST':
        req.on('data',(postData)=>{
            res.writeHead(200, {'Content-Type':'text/html'});

            var obj = querystring.parse(postData.toString());
            
            res.write(JSON.stringify(obj));
            res.end();

            console.log(obj);
        })
            break;
    
        default:
            break;
    }
}

http.createServer(onRequest).listen(3000);
console.log('server running');