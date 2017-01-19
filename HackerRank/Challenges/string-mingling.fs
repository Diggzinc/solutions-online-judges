open System
open System.Linq

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()

    let explode (s:string) =
        [for c in s -> c]

    let implode (xs:char list) =
        let sb = System.Text.StringBuilder(xs.Length)
        xs |> List.iter (sb.Append >> ignore)
        sb.ToString()
   
    let a = read() |> explode
    let b = read() |> explode
   
    let rec mingle a b ab =
        match (a,b) with
        | ([],[]) -> ab
        | ([a'],[b']) -> b'::a'::ab
        | (a'::a'', b'::b'') -> mingle a'' b'' (b'::a'::ab)   

    let r = (mingle a b []) |> List.rev |> implode

    printfn "%s" r
    0 // return an integer exit code
