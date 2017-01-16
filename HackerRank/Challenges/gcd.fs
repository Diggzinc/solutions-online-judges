open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let values = read().Split ' '
    let a = values.[0] |> int
    let b = values.[1] |> int

    let rec gcd a b = 
        if b <> 0 
        then gcd b (a%b)
        else a

    printfn "%A" (gcd a b)
    0 // return an integer exit code
