import React, { Component } from "react";
import NewsItem from "./NewsItem";
import Spinner from "./Spinner";
import PropTypes from "prop-types";

export class News extends Component {
  static defaultProps = {
    country: "in",
    pageSize: 6,
    category: "general",
  };
  static propTypes = {
    country: PropTypes.string,
    pageSize: PropTypes.number,
    category: PropTypes.string,
  };
  constructor() {
    super();
    console.log("I am a constructor");
    this.state = {
      articles: [],
      loading: false,
      page: 1,
    };
  }

  // We can change states using setState but we cannot change props, they are read-only

  async updateNews() {
    const url = `https://newsapi.org/v2/top-headlines?country=${this.props.country}&category=${this.props.category}&apiKey=4575892e261444059051e887e80d9dc8&page=${this.state.page}&pageSize=${this.props.pageSize}`;
    this.setState({ loading: true });
    let data = await fetch(url);
    let parsedData = await data.json();
    this.setState({
      articles: parsedData.articles,
      totalResults: parsedData.totalResults,
      loading: false,
    });
  }
  async componentDidMount() {
    this.updateNews();
  }

  handlePrevClick = async () => {
    await this.setState({ page: this.state.page - 1 });
    this.updateNews();
  };

  handleNextClick = async () => {
    await this.setState({ page: this.state.page + 1 });
    this.updateNews();
  };
  render() {
    return (
      <div className="container my-3">
        <h1 className="text-center" style={{ margin: "30px" }}>
          Zander News App
        </h1>
        {this.state.loading && <Spinner />}
        <div className="row my-2 mx-2">
          {/* this state has 7 objects under 'articles' */}
          {!this.state.loading &&
            this.state.articles.map((element) => {
              return (
                <div key={element.url} className="col-md-4">
                  <NewsItem
                    title={
                      element.title ? element.title.slice(0, 30) : "No Title"
                    }
                    description={
                      element.description
                        ? element.description.slice(0, 80)
                        : "No Description"
                    }
                    imgUrl={element.urlToImage}
                    newsUrl={element.url}
                    author={element.author}
                    date={element.publishedAt}
                    source={element.source.name}
                  />
                </div>
              );
            })}
          <div className="container d-flex justify-content-between mx-2">
            <button
              disabled={this.state.page <= 1}
              type="button"
              className="btn btn-dark"
              onClick={this.handlePrevClick}
            >
              &larr; Prev
            </button>
            {/* disabled condition is used so that the user cannot click it when it is homepage */}
            <button
              disabled={
                this.state.page + 1 >
                Math.ceil(this.state.totalResults / this.props.pageSize)
              }
              type="button"
              className="btn btn-dark"
              onClick={this.handleNextClick}
            >
              Next &rarr;
            </button>
          </div>
        </div>
      </div>
    );
  }
}

export default News;
