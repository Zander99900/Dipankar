import React, { useState } from "react";

export default function TextForm(props) {
    const handleUpClick = () => {
        console.log("UpperCase Was Clicked" + text);
        let newText = text.toUpperCase();
        setText(newText);
    };

    const handleOnClick = (Event) => {
        console.log("On Change");
        setText(Event.target.value);
    };
    const [text, setText] = useState("Enter Text Here");

    return (
        <div>
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
            <button className="btn btn-primary" onClick={handleUpClick}>
                Convert To Uppercase
            </button>
        </div>
    );
}
