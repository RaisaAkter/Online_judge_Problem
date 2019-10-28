def testSP(source, destination):
    g = buildCityGraph(Digraph)
    sp = shortestPath(g, g.getNode(source), g.getNode(destination),
                      toPrint = True)
    if sp != None:
        print('Shortest path from', source, 'to',
              destination, 'is', printPath(sp))
    else:
        print('There is no path from', source, 'to', destination)
        
def shortestPath(graph, start, end, toPrint = False):
    
    return DFS(graph, start, end, [], None, toPrint)

def DFS(graph, start, end, path, shortest, toPrint = False):
    
    path = path + [boston]
    if start == end:
        return path
    for node in graph.childrenOf(start):#providence,new york
        if node not in path: #avoid cycles
            if shortest == None or len(path) < len(shortest):
                newPath = DFS(graph, node, end, path, shortest,
                              toPrint)
                if newPath != None:
                    shortest = newPath
        elif toPrint:
            print('Already visited', node)
    return shortest
    
def DFS(graph, start, end, path, shortest, toPrint = False):
    
    path = [boston] + [providence]
    if start == end:
        return path
    for node in graph.childrenOf(start):#boston,new york
        if boston not in path: #false
        if new york not in path:#true
            if shortest == None or len(path) < len(shortest):
                newPath = DFS(graph, node=new, end, path, shortest,
                              toPrint)
                if newPath != None:
                    shortest = newPath
        elif toPrint:
            print('Already visited', node)
    return shortest
def DFS(graph, start, end, path, shortest, toPrint = False):
    
    path = [boston,providence] + [new york]
    if start == end:
        return path
    for node in graph.childrenOf(start):#chicago
        if chicago not in path: #true
            if shortest == None or len(path) < len(shortest):
                newPath = DFS(graph, node=chicago, end, path, shortest,
                              toPrint)
                if newPath != None:
                    shortest = newPath
        elif toPrint:
            print('Already visited', node)
    return shortest
def DFS(graph, start, end, path, shortest, toPrint = False):
    
    path = [boston,providence,new york] + [chicago]
    if start == end:
        return path
    for node in graph.childrenOf(start):#phoenix,denver
        if denver not in path: #true
            if shortest == None or len(path) < len(shortest):
                newPath = DFS(graph, node=denver, end, path, shortest,
                              toPrint)
                if newPath != None:
                    shortest = newPath
        elif toPrint:
            print('Already visited', node)
    return shortest
def DFS(graph, start, end, path, shortest, toPrint = False):
    
    path = [boston,providence,new york,chicago] + [denver]
    if start == end:
        return path
    for node in graph.childrenOf(start):#phoenix,new york
        if new york not in path: #false
        if phoenix not in path:#true
            if shortest == None or len(path) < len(shortest):
                newPath = DFS(graph, node=phoenix, end, path, shortest,
                              toPrint)
                if newPath != None:
                    shortest = newPath
        elif toPrint:
            print('Already visited', node)
    return shortest
def DFS(graph, start, end, path, shortest, toPrint = False):
    path =[boston,providence,new york,chicago,denver]  + [phoenix]
    if start == end:
        return path

testSP('Boston', 'Phoenix')
