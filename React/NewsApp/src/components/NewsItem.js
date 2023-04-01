import React, { Component } from "react";

export class NewsItem extends Component {
  render() {
    let { title, description, imgUrl, newsUrl } = this.props;
    return (
      <div className="card" style={{ width: "18rem" }}>
        <img
          className="card-img-top"
          src={imgUrl}
          alt="Card cap"
        />
        <div className="card-body">
          <h5 className="card-title">{title}...</h5>
          <p className="card-text">{description}...</p>
          <a href={newsUrl} target = '_blank' rel="noreferrer" className="btn btn-primary btn-sm ">
            {/* /newsdetails is just a temporary link which doesnt exist and added only to remove empty link error in console */}
            Read more
          </a>
        </div>
      </div>
    );
  }
}

export default NewsItem;
