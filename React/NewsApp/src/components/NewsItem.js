import React, { Component } from "react";

export class NewsItem extends Component {
  render() {
    let { title, description } = this.props;
    return (
      <div className="card" style={{ width: "18rem" }}>
        <img
          className="card-img-top"
          src="https://images.axios.com/vsDiOj0mAxxNK5WxJ4kSc7edy7E=/0x0:1920x1080/1366x768/2023/03/27/1679925999384.jpg"
          alt="Card cap"
        />
        <div className="card-body">
          <h5 className="card-title">{title}</h5>
          <p className="card-text">{description}</p>
          <a href="/newsdetails" className="btn btn-primary">
            {/* /newsdetails is just a temporary link which doesnt exist and added only to remove empty link error in console */}
            Go somewhere
          </a>
        </div>
      </div>
    );
  }
}

export default NewsItem;
