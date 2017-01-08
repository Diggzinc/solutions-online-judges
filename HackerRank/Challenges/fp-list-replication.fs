open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = read() |> int

    //match expression;
    //null matches with false
    // _ matches with true (being _ a wildcard operator)
    let isValid = function null -> false | _ -> true

    let expand n v = {0 .. n - 1} |> Seq.map(fun _ -> int v)
    let print v = printfn "%d" v
    let lst = (Seq.initInfinite read |> Seq.takeWhile isValid |> Seq.map (expand n) |> Seq.collect (fun l -> l))
    Seq.iter (print) lst |> ignore
    0
