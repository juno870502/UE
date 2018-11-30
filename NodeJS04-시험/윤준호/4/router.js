function route(handle, path, req, res) {
    if (typeof handle[path] === 'function') {
        handle[path](req,res);
    } else {
        res.writeHead(404, {'Content-Type':'text/http'});
        res.write('Page Not Found');
        res.end();
    }
}

module.exports={
    route:route
}