open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = (read() |> int) - 1
    
    let f n =
        match n with
        | 0 -> 1
        | _ -> [1..int(n)] |> List.reduce(*)

    let p n r = (f n) / ( (f r) * ( f (n-r) ) )

    let cr r =
        let columns = [0..r]
        columns 
        |> List.map(p r)
    
    [0..n]
    |> List.map(cr) 
    |> List.map(fun l -> String.Join(" ", l))
    |> List.iter(printfn "%s")

    0 // return an integer exit code
