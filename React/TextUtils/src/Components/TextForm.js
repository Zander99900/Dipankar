import React, { useState } from "react";

export default function TextForm(props) {
  const [text, setText] = useState(""); //UseState Hook

  const handleUpClick = () => {
    console.log("UpperCase Was Clicked" + text);
    let newText = text.toUpperCase();
    setText(newText);
    props.showAlert("Converted To UpperCase", "success");
  };
  const handleLowClick = () => {
    console.log("UpperCase Was Clicked" + text);
    let newText = text.toLowerCase();
    setText(newText);
    props.showAlert("Converted To LowerCase", "success");
  };

  const handleOnClick = (Event) => {
    console.log("On Change");
    setText(Event.target.value);
  };

  const handleCopy = () => {
    navigator.clipboard.writeText(text);
    props.showAlert("Copied To ClipBoard", "success");
  };
  const handleSpace = () => {
    var newtext = text.split(/[ ]+/); //Used Rejex
    setText(newtext.join(" "));
    props.showAlert("Removed Extra Spaces", "success");
  };
  const deleteAll = () => {
    setText("");
    props.showAlert("Removed Text", "success");
  };
  return (
    <>
      <div
        className="container"
        style={{ color: props.mode === "dark" ? "white" : "#042743" }}
      >
        <h1>Zander's 1st Web-App</h1>
        <h1>{props.heading}</h1>
        <div className="mb-3">
          <textarea
            className="form-control"
            value={text}
            onChange={handleOnClick}
            style={{
              backgroundColor: props.mode === "dark" ? "grey" : "white",
              color: props.mode === "dark" ? "white" : "#042743",
            }}
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
        <button className="btn btn-primary mx-2" onClick={handleCopy}>
          Copy Text
        </button>
        <button className="btn btn-primary mx-2" onClick={handleSpace}>
          Remove Extra Spaces
        </button>
        <button className="btn btn-primary mx-2" onClick={deleteAll}>
          Remove Text
        </button>
      </div>
      <div
        className="container my-3"
        style={{ color: props.mode === "dark" ? "white" : "#042743" }}
      >
        <h2>Your text summary</h2>
        <p>
          {
            text.split(/\s+/).filter((element) => {
              return element.length !== 0;
            }).length
          }{" "}
          {/*0 word count logic*/} words and {text.length} characters including
          Spaces
        </p>
        <h2>Preview</h2>
        <p>{text}</p>
      </div>
    </>
  );
  //  primary for blue, success for green & danger for red - bootstrap keyword
}
