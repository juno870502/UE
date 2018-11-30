var server = require('./server');
var request = require('./requestHandler');
var router = require('./router');

var handle={
    '/':request.root,
    '/start':request.start,
    '/show':request.show
}

server.serverStart(handle, router.route);