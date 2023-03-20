import React, { useState } from "react";

export default function TextForm(props) {
    const handleUpClick = () => {
        console.log("UpperCase Was Clicked" + text);
        let newText = text.toUpperCase();
        setText(newText);
    };
    const handleLowClick = () => {
        console.log("UpperCase Was Clicked" + text);
        let newText = text.toLowerCase();
        setText(newText);
    };

    const handleOnClick = (Event) => {
        console.log("On Change");
        setText(Event.target.value);
    };
    const [text, setText] = useState("");

    return (
        <>
        <div className="container">
          <h1>{props.heading}</h1>
          <div className="mb-3">
            <textarea
              className="form-control"
              value={text}
              onChange={handleOnClick}
              id="myBox"
              rows="8"
            ></textarea>
          </div>
          <button className="btn btn-primary mx-2" onClick={handleUpClick}>
            Convert To Uppercase
          </button>
          <button className="btn btn-primary mx-2" onClick={handleLowClick}>
            Convert To LowerCase
          </button>
        </div>
        <div className="container my-3">
          <h2>Your text summary</h2>
          <p>{text.split(" ").length} words and {text.length} characters including Spaces</p>
          <h2>Preview</h2>
          <p>{text}</p>
        </div>
      </>
    );
    //  primary for blue, success for green & danger for red - bootstrap keyword
  }
