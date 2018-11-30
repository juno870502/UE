var http = require('http');
var fs = require('fs');
var formidable = require('formidable');

function onRequest(req, res) {
    var method = req.method;
    switch (method) {
        case 'GET':
            fs.readFile('./index.html',(err,html)=>{
                res.writeHead(200, {'Content-Type':'text/html'});
                res.write(html);
                res.end();
            })
            break;
        case 'POST':
            formidable.IncomingForm().parse(req, (err, fields, files)=>{
                // console.log(files.image);
                fs.readFile(files.image.path, (err, img)=>{
                    res.writeHead(200, {'Content-Type':'image/jpg'});
                    res.write(img);
                    res.end();
                })
                
            })
            break;
    
        default:
            break;
    }
}

http.createServer(onRequest).listen(3000);
console.log('server running');