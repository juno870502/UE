function root(req,res) {
    res.writeHead(200, {'Content-Type':'text/http'});
    res.write('This is the Root Page');
    res.end();
}
function start(req,res) {
    res.writeHead(200, {'Content-Type':'text/http'});
    res.write('This is the Start Page');
    res.end();
}
function show(req,res) {
    res.writeHead(200, {'Content-Type':'text/http'});
    res.write('This is the Show Page');
    res.end();
}

module.exports={
    root:root,
    start:start,
    show:show
}