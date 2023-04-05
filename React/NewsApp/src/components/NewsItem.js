import React, { Component } from "react";

export class NewsItem extends Component {
  render() {
    let { title, description, imgUrl, newsUrl, author, date, source } = this.props;
    return (
      <div className="card">
        <span className="position-absolute top-0 translate-middle badge rounded-pill bg-danger" style={{left: '90%', zIndex:1}}>
          {source}
        </span>

        <img
          className="card-img-top"
          src={
            imgUrl? imgUrl: "https://png.pngtree.com/png-clipart/20190516/original/pngtree-newspaper-icon-png-image_3568621.jpg"
          }
          alt="Card cap"
        />
        <div className="card-body">
          <h5 className="card-title">{title}...</h5>
          <p className="card-text">{description}...</p>
          <p className="card-text">
            <small className="text-muted">
              By {author ? author : "Unknown"} on {new Date(date).toGMTString()}
            </small>
          </p>
          <a
            href={newsUrl}
            target="_blank"
            rel="noreferrer"
            className="btn btn-primary btn-sm "
          >
            Read more
          </a>
        </div>
      </div>
    );
  }
}

export default NewsItem;
