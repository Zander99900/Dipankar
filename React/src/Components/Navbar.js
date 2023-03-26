import React from "react";
import PropTypes from "prop-types";
import { Link } from "react-router-dom";

// Github Pages Give error for react router so we remove all the changes we did to implement react router such as changing 'link to' to 'a href'
export default function Navbar(props) {
  return (
    <div>
      <nav
        className={`navbar navbar-expand-lg bg-${props.mode}`}
        data-bs-theme={props.mode}
      >
        <div className="container-fluid">
          <Link className="navbar-brand" to="/">
            {props.Title}
          </Link>
          <button
            className="navbar-toggler"
            type="button"
            data-bs-toggle="collapse"
            data-bs-target="#navbarSupportedContent"
            aria-controls="navbarSupportedContent"
            aria-expanded="false"
            aria-label="Toggle navigation"
          >
            <span className="navbar-toggler-icon"></span>
          </button>
          <div className="collapse navbar-collapse" id="navbarSupportedContent">
            <ul className="navbar-nav me-auto mb-2 mb-lg-0">
              <li className="nav-item">
                <Link className="nav-link active" aria-current="page" to="/">
                  Home
                </Link>
              </li>
              <li className="nav-item">
                <Link className="nav-link" to="/about">
                  {props.aboutText}
                </Link>
              </li>
            </ul>
            {/* <form className="d-flex" role="search">
              <input
                className="form-control me-2"
                type="search"
                placeholder="Search"
                aria-label="Search"
              />
              <button className="btn btn-outline-success me-2" type="submit">
                Search
              </button>
            </form> */}
            <div className="d-flex">
              <div
                className="bg-primary rounded mx-2"
                onClick={() => {
                  props.ToggleButton("primary");
                }}
                style={{ height: "20px", width: "20px", cursor: "pointer" }}
              ></div>
            </div>
            <div className="d-flex">
              <div
                className="bg-danger rounded mx-2"
                onClick={() => {
                  props.ToggleButton("danger");
                }}
                style={{ height: "20px", width: "20px", cursor: "pointer" }}
              ></div>
            </div>
            <div className="d-flex">
              <div
                className="bg-success rounded mx-2"
                onClick={() => {
                  props.ToggleButton("success");
                }}
                style={{
                  height: "20px",
                  width: "20px",
                  cursor: "pointer",
                }}
              ></div>
            </div>
          </div>
        </div>
      </nav>
    </div>
  );
}
//It is used to reduce the chances of error because we can send any datatype within title & aboutText
Navbar.propTypes = {
  Title: PropTypes.string.isRequired,
  aboutText: PropTypes.string.isRequired,
};

//If we don't pass the props then we should set defaultProps such as:
Navbar.defaultProps = {
  Title: "Title not set",
  aboutText: "aboutText not set",
};
