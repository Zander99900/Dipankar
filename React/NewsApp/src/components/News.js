import React, { Component } from "react";
import NewsItem from "./NewsItem";

export class News extends Component {

  constructor() {
    super();
    console.log("I am a constructor");
    this.state = {
      articles: [],
      loading: true
    };
  }

  // We can change states using setState but we cannot change props, they are read-only
  
  async componentDidMount(){
    let url = "https://newsapi.org/v2/top-headlines?country=us&apiKey=4575892e261444059051e887e80d9dc8";
    let data = await fetch(url);
    let parsedData = await data.json()
    this.setState({articles: parsedData.articles})
  }
  
  render() {
    return (
      <div className="container my-3">
        <h2> This is a news component </h2>
        <div className="row">
          {/* This state has 7 objects under 'articles' */}
          {this.state.articles.map((element) => {
            return (
              <div key={element.url} className="col-md-4">
                <NewsItem
                  title={element.title?element.title.slice(0, 30):"No Title"}
                  description={element.description?element.description.slice(0, 80):"No Description"}
                  imgUrl={element.urlToImage}
                  newsUrl = {element.url}
                />
              </div>
            );
          })}
        </div>
      </div>
    );
  }
}

export default News;
