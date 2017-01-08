open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    
    let rec reverse list rev =
        match list with
        | [] -> rev
        | [v] -> v::rev
        | head::tail -> reverse tail (head::rev)

    
    let reversed = 
        ((Seq.initInfinite read 
        |> Seq.takeWhile (String.IsNullOrWhiteSpace >> not) 
        |> Seq.map(int))
        |> Seq.toList 
        |>  reverse <| []) 
        |> Seq.iter (fun v -> printfn "%A" v)
        |> ignore
    0