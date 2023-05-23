from html.parser import HTMLParser


class MyHTMLParser(HTMLParser):

    @staticmethod
    def print_attrs(attrs):
        if len(attrs) > 0:
            for k,v in attrs:
                print("-> {key} > {value}".format(key=k, value=v))

    def handle_starttag(self, tag, attrs):
        print("Start :", tag)
        self.print_attrs(attrs)
    
    def handle_endtag(self, tag):
        print("End   :", tag)
    
    def handle_startendtag(self, tag, attrs):
        print("Empty :", tag)
        self.print_attrs(attrs)


if __name__ == "__main__":
    html = ''
    for _ in range(int(input())):
        html += input()
    p = MyHTMLParser()
    p.feed(html)
    p.close()

