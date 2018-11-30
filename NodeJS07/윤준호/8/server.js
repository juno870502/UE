var http = require('http');
var fs = require('fs');
var express = require('express');
var mysql = require('mysql');

var app = express();
app.use(express.urlencoded({extended:false}));

var client = mysql.createConnection({
    user:'root',
    password:'1234',
    database:'restdb'
});
client.connect();

app.get('/',(req, res)=>{
    console.log('DB select request');
    var query = 'select * from userinfo';
    client.query(query, (err, result, fields)=>{
        if (err) {
            res.send('쿼리 실패');
        } else {
            res.send(result);
        }
    })
})

app.post('/', (req,res)=>{
    console.log('DB insert request');
    var query = 'insert into userinfo set ?';
    var data = {
        name:req.body.name,
        region:req.body.region
    }
    client.query(query, data,(err, result,fields)=>{
        if (err) {
            res.send('쿼리 실패');
        } else {
            res.send(result);
        }
    });
});

app.delete('/', (req,res)=>{
    console.log('DB delete request');
    var query = 'delete from userinfo where id=?';
    client.query(query, req.body.id, (err, result, fields)=>{
        if (err) {
            res.send('쿼리 실패');
        } else {
            res.send(result);
        }
    });
});

app.put('/',(req,res)=>{
    console.log('DB update request');
    var query = 'update userinfo set region=? where id=?';
    client.query(query, [req.body.region, req.body.id], (err, result, fields)=>{
        if (err) {
            res.send('쿼리 실패');
        } else {
            res.send(result);
        }
    });
});

app.delete('/',(req,res)=>{
    console.log('DB delete request');
    var query = 'delete from userinfo where id=?';
    client.query(query, req.body.id, (err, result, fields)=>{
        if (err) {
            res.send('쿼리 실패');
        } else {
            res.send(result);
        }
    });
});

app.listen(3000);
console.log('server running');