import React, { Component } from 'react'
import loading from './loading.gif'

export class Spinner extends Component {
  render() {
    return (
      <div className='text-center'>
        <img src={loading} alt="Loading Image" />
        <h3>Loading News...</h3>
      </div>
    )
  }
}

export default Spinner
