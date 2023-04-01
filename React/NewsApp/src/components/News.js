import React, { Component } from "react";
import NewsItem from "./NewsItem";

export class News extends Component {
  articles = [
    {
      source: { id: "axios", name: "Axios" },
      author: "Dan Primack",
      title:
        "Monarch Collective raises $100 million to fund women's pro sports",
      description:
        "Private equity's begun plugging big money into pro sports, but most of it has been for men's teams.",
      url: "https://www.axios.com/2023/03/27/monarch-collective-raises-100-million-to-fund-womens-pro-sports",
      urlToImage:
        "https://images.axios.com/vsDiOj0mAxxNK5WxJ4kSc7edy7E=/0x0:1920x1080/1366x768/2023/03/27/1679925999384.jpg",
      publishedAt: "2023-03-27T14:09:26Z",
      content:
        "Monarch Collective, a new investment firm focused on women's professional sports, has raised $100 million for its debut fund.\r\nWhy it matters: Monarch is seeking to fund what it views as the next big… [+1167 chars]",
    },
    {
      source: { id: "axios", name: "Axios" },
      author: "Kendall Baker",
      title: "Sports are good for the soul",
      description:
        'Live sports attendance leads to an increase in people\'s sense that "life is worthwhile."',
      url: "https://www.axios.com/2023/03/27/health-study-sports-improve-well-being",
      urlToImage:
        "https://images.axios.com/CW4jl2o4QaCm7clRBbllPrDe00I=/0x0:1920x1080/1366x768/2023/03/27/1679903824179.jpg",
      publishedAt: "2023-03-27T11:45:13Z",
      content:
        "Feeling blue? Try sports.\r\nDriving the news: New research has found that attending live sporting events improves levels of well-being and reduces feelings of loneliness.\r\nDetails: The study used data… [+928 chars]",
    },
    {
      source: { id: "fox-sports", name: "Fox Sports" },
      author: "Rob Rang",
      title: "2023 NFL Draft prospect rankings: 100 best available players",
      description:
        "The 2023 NFL Draft is approaching. Who are the best players available? FOX Sports draft analyst Rob Rang ranks and evaluates the top 100.",
      url: "http://www.foxsports.com/stories/nfl/2023-nfl-draft-prospect-rankings-top-100-best-available-players",
      urlToImage:
        "https://a57.foxsports.com/statics.foxsports.com/www.foxsports.com/content/uploads/2023/01/1408/814/01.25.23_NFL-Draft-Rankings_Horizontal.jpg?ve=1&tl=1",
      publishedAt: "2023-01-25T18:12:58Z",
      content:
        "With the 2023 NFL Draft approaching, 95% of the evaluations are complete.\r\nAfter 20 years of scouting, Ive learned better than to significantly adjust my rankings of football players based on the wor… [+23968 chars]",
    },
    {
      source: { id: "usa-today", name: "USA Today" },
      author: null,
      title: "Daily Briefing",
      description:
        "The day's top stories, from sports to movies to politics to world events.",
      url: "https://profile.usatoday.com/newsletters/daily-briefing/",
      urlToImage:
        "https://profile.usatoday.com/newsletters/resources/usat/property/usatoday/newsletter-thumbs/8872UT-E-NLETTER02@2x.jpg",
      publishedAt: "2021-08-15T15:35:07+00:00",
      content:
        "The day's top stories, from sports to movies to politics to world events.",
    },
  ];

  constructor() {
    super();
    console.log("I am a constructor");
    this.state = {
      articles: this.articles,
      loading: false,
    };
  }
  // We can change states using setState but we cannot change props, they are read-only
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
                  title={element.title.slice(0, 30)}
                  description={element.description.slice(0, 80)}
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
