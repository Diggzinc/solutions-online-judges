open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = read()
    
    let explode (s:string) =
        [for c in s -> c]

    let implode (xs:char list) =
        let sb = System.Text.StringBuilder(xs.Length)
        xs |> List.iter (sb.Append >> ignore)
        sb.ToString()

    let isValid = function null -> false | _ -> true

    let rec swap ``new`` old =
        match old with
        | [] -> ``new``
        | a'::b'::c' -> swap (a'::b'::``new``) c'

    let transform s = s |> explode |> swap [] |> List.rev |> implode

    Seq.initInfinite read 
    |> Seq.takeWhile isValid 
    |> Seq.map(transform)
    |> Seq.iter(printfn "%s")
    |> ignore
    0 // return an integer exit code
