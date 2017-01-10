open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = read() |> int

    let s = 
        Seq.initInfinite read 
        |> Seq.takeWhile (String.IsNullOrWhiteSpace >> not) 
        |> Seq.length
    printfn  "%A" (s + 1)
    0 // return an integer exit code
