var fs = require('fs');
var express = require('express');
var mysql = require('mysql');

var client = mysql.createConnection({
    user:'root',
    password:'1234',
    database:'userdb'
})
client.connect();

var app = express();
app.use(express.urlencoded({extended:false}));

app.get('/', (req,res)=>{
    fs.readFile('./signin.html', (err, html)=>{
        res.contentType('text/html');
        res.send(html);
        res.end();
    })
})

app.post('/', (req,res)=>{
    var query = 'select * from userinfo where userid=? and password=?';
    client.query(query, [req.body.id, req.body.password], (err, result, fields)=>{
        if (result.length) {
            res.send('로그인 성공');
        }else{
            res.send('로그인 실패');
        }
    })
})

app.get('/signup',(req,res)=>{
    fs.readFile('./signup.html', (err, html)=>{
        res.contentType('text/html');
        res.send(html);
        res.end();
    })
})

app.post('/signup',(req,res)=>{
    // 중복 처리
    var query = 'select * from userinfo where userid=?';
    client.query(query, [req.body.id, req.body.password], (err, result, fields)=>{
        if (result.length) {
            res.send('중복된 ID가 있습니다.')
        }else{
            // 증복 안됐을 때
            query = 'insert into userinfo set ?';
            var data ={
                userid : req.body.id,
                nickname : req.body.nick,
                password : req.body.password
            };
            client.query(query, data, (err, result, fields)=>{
                console.log(err);
                if (err) {
                    res.send('가입 실패');
                } else {
                    res.send('가입에 성공했습니다. 로그인 페이지로 돌아가십시오');
                }
            })
        }
    })
})
app.listen(3000);
console.log('server running');