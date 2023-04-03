import "./App.css";

import React, { Component } from "react";
import Navbar from "./components/Navbar";
import News from "./components/News";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";

export default class App extends Component {
  // c = 'Zander'; learned to use a variable in class component
  render() {
    //This is a life cycle method which means that whenever react loads a component e.g. navbar, it runs a series of methods
    return (
      <div>
        <Router>
          <Navbar />
          <Routes>
            <Route
              exact
              path="/general"
              element={
                <News
                  key="general"
                  pageSize={6}
                  country="in"
                  category="general"
                />
              }
            />
            <Route
              exact
              path="/business"
              element={
                <News
                  key="business"
                  pageSize={6}
                  country="in"
                  category="business"
                />
              }
            />
            <Route
              exact
              path="/entertainment"
              element={
                <News
                  key="entertainment"
                  pageSize={6}
                  country="in"
                  category="entertainment"
                />
              }
            />
            <Route
              exact
              path="/health"
              element={
                <News
                  key="health"
                  pageSize={6}
                  country="in"
                  category="health"
                />
              }
            />
            <Route
              exact
              path="/science"
              element={
                <News
                  key="science"
                  pageSize={6}
                  country="in"
                  category="science"
                />
              }
            />
            <Route
              exact
              path="/sports"
              element={
                <News
                  key="sports"
                  pageSize={6}
                  country="in"
                  category="sports"
                />
              }
            />
            <Route
              exact
              path="/technology"
              element={
                <News
                  key="technology"
                  pageSize={6}
                  country="in"
                  category="technology"
                />
              }
            />
          </Routes>
        </Router>
      </div>
    );
  }
}
