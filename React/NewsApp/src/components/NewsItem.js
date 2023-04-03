import React, { Component } from "react";

export class NewsItem extends Component {
  render() {
    let { title, description, imgUrl, newsUrl } = this.props;
    return (
      <div className="card">
        <img
          className="card-img-top"
          src={imgUrl?imgUrl:"https://png.pngtree.com/png-clipart/20190516/original/pngtree-newspaper-icon-png-image_3568621.jpg"}
          alt="Card cap"
        />
        <div className="card-body">
          <h5 className="card-title">{title}...</h5>
          <p className="card-text">{description}...</p>
          <a href={newsUrl} target = '_blank' rel="noreferrer" className="btn btn-primary btn-sm ">
            Read more
          </a>
        </div>
      </div>
    );
  }
}

export default NewsItem;
