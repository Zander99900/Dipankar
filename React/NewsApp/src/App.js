import './App.css';

import React, { Component } from 'react'
import Navbar from './components/Navbar';
import News from './components/News';

export default class App extends Component {
  // c = 'Zander'; learned to use a variable in class component
  render() { //This is a life cycle method which means that whenever react loads a component e.g. navbar, it runs a series of methods 
    return (
      <div>
        {/* This is a class Based Component {this.c} */}
        <Navbar/>
        <News pageSize={6}/>
      </div>
    )
  }
}

