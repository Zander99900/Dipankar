import { useRouter } from "next/router";
// This is an example of dynamic routing (we post the slugs that we fetch from database)
const Post = ()=>{
    const router = useRouter();
    const {sno} = router.query
    return <p>Post: {sno}</p>

}

export default Post
