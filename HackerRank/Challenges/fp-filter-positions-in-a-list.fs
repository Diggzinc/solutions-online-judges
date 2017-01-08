open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = read() |> int

    let readList = 
        Seq.initInfinite read 
        |> Seq.takeWhile (String.IsNullOrWhiteSpace >> not) 
    
    readList
    |> Seq.indexed
    |> Seq.filter (fst >> fun i -> i % 2 = 0) 
    |> Seq.iter (snd >> fun v -> printfn "%s" v) 
    |> ignore
    0 // return an integer exit code