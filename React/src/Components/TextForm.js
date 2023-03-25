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

  const handleDelete = () => {
    let newText = "";
    setText(newText);
    props.showAlert("Text Cleared!", "success");
  };

  const handleOnClick = (Event) => {
    console.log("On Change");
    setText(Event.target.value);
  };
  
  const handleCopy = () => {
    var text = document.getElementById("myBox");
    text.select();
    navigator.clipboard.writeText(text.value);
    document.getSelection().removeAllRanges();
    props.showAlert("Copied To ClipBoard", "success");
  };
  const handleSpace = () => {
    var newtext = text.split(/[ ]+/); //Used Rejex
    setText(newtext.join(" "));
    props.showAlert("Removed Extra Spaces", "success");
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
              backgroundColor: props.mode === "dark" ? "#13466e" : "white",
              color: props.mode === "dark" ? "white" : "#042743",
            }}
            id="myBox"
            rows="8"
          ></textarea>
        </div>
        <button
          disabled={text.length === 0}
          className="btn btn-primary mx-2 my-2"
          onClick={handleUpClick}
        >
          Convert To Uppercase
        </button>
        <button
          disabled={text.length === 0}
          className="btn btn-primary mx-2 my-2"
          onClick={handleLowClick}
        >
          Convert To LowerCase
        </button>
        <button
          disabled={text.length === 0}
          className="btn btn-primary mx-2 my-2"
          onClick={handleCopy}
        >
          Copy Text
        </button>
        <button
          disabled={text.length === 0}
          className="btn btn-primary mx-2 my-2"
          onClick={handleSpace}
        >
          Remove Extra Spaces
        </button>
        <button
          disabled={text.length === 0}
          className="btn btn-primary mx-2 my-2"
          onClick={handleDelete}
        >
          Clear Text
        </button>
      </div>
      <div
        className="container my-3"
        style={{ color: props.mode === "dark" ? "white" : "#042743" }}
      >
        <h2>Your text summary</h2>
        <p>
          {
            text.split(" ").filter((element) => {
              return element.length !== 0;
            }).length
          }{" "}
          {/*0 word count logic*/} words and {text.length} characters including
          Spaces
        </p>
        <h2>Preview</h2>
        <p>{text.length>0?text:"Nothing to preview!"}</p>
      </div>
    </>
  );
  //  primary for blue, success for green & danger for red - bootstrap keyword
}
