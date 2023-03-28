import React, { Component } from "react";
import NewsItem from "./NewsItem";

export class News extends Component {
  render() {
    return (
      <div className="container my-3">
        <h2> This is a news component </h2>
        <div className="row">
          <div className="col-md-4">
            <NewsItem title="Sample Title" description="this is description" />
          </div>
          <div className="col-md-4">
            <NewsItem title="Sample Title" description="this is description" />
          </div>
          <div className="col-md-4">
            <NewsItem title="Sample Title" description="this is description" />
          </div>
        </div>
      </div>
    );
  }
}

export default News;
