import React from "react";

export default function Alerts(props) {
  const capitalize = (word) =>{
    const lower = word.toLowerCase();
    return lower.charAt(0).toUpperCase() + lower.slice(1);
  }
  return (
      //The first 'props.alert &&' is used so that if initially the props.alert value is null then it will not move further and the function is stopped there only
      //This style height is used to reduce cls: cummulitive layout shift
    <div style={{height: '50px'}}> 
    {props.alert && <div className={`alert alert-${props.alert.type} alert-dismissible fade show`} role="alert">
      <strong>{capitalize(props.alert.type)}</strong>: {props.alert.msg}  
    </div>}
    </div>
  );
}