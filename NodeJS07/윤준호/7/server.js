var http = require('http');
var express = require('express');
var fs = require('fs');
var multiparty = require('connect-multiparty')

var app = express();
app.use(multiparty());

var filepath;

app.get('/', (req, res)=>{
    fs.readFile('./index.html',(err, html)=>{
        res.contentType('text/html');
        res.write(html);
        res.end();
    })
})

app.post('/', (req, res)=>{
    fs.readFile(req.files.image.path, (err, data)=>{
        res.contentType('image/jpg');
        res.write(data);
        res.end();
    })
})

app.listen(3000);
console.log('server running');