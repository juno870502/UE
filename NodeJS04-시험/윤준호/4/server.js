var http = require('http');

function serverStart(handle, route) {
    function onRequest(req, res) {
        route(handle, req.url, req, res);
    }

    http.createServer(onRequest).listen(8888);
    console.log('ServerRunning');
}

module.exports={
    serverStart:serverStart
}