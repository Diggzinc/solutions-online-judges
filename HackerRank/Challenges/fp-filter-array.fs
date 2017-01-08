open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = read() |> int

    Seq.initInfinite read 
    |> Seq.takeWhile (String.IsNullOrWhiteSpace >> not) 
    |> Seq.map (fun v -> v |> int) 
    |> Seq.filter (fun v -> v < n)
    |> Seq.iter (fun v -> printfn "%d" v) 
    |> ignore
    0 // return an integer exit code
