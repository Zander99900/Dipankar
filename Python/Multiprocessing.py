#In a process, multiple threads are executed, but in multiple CPUs, multiple processes can be used
import multiprocessing
import requests
from concurrent.futures import ProcessPoolExecutor
def downloadFile(url, name):
    print(f"Started downloading {name}")
    response = requests.get(url)
    open(f"TestImages/file{name}.jpg","wb").write(response.content)
    print(f"Finished downloading {name}")
 
if __name__ == "__main__":   
    url = "https://picsum.photos/200/300"
#     pros = []

#     for i in range(5):
#         p = multiprocessing.Process(target=downloadFile, args=[url, i])
#         p.start()
#         pros.append(p)
        
#     for p in pros:
#         p.join()

#Same function using concurrent futures
    with ProcessPoolExecutor() as executor:
        l1 = [url for i in range(5)]
        l2 = [i for i in range(5)]
        results = executor.map(downloadFile, l1, l2)
        for r in results:
            print(r)