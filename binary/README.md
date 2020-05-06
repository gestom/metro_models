## Warped Hypertime Representations for Long-term Autonomy of Mobile Robots
### Door experiment described in Section 5A

This repository contains an experimental scenario aimed at testing the predictive capabilities of temporal models.
The scenario is focused on modelling Bernoulli distributions over time. 
For details, see [[1](#references)].

The temporal models are a submodule, and therefore, you need to initialize it: **git submodule update --init --recursive**.
To re-run the experiments, first go to the *src* folder and type **make** to compile the predictive framework.
Edit the *src/models/test_models.txt* file to indicate, which models you want to evaluate.
Then, go to the *eval_scripts* folder and type **make** to compile the **t-test** utility. 

To run the evaluation, type:

**./process_dataset.sh greg_door_2016_min**

if it runs well, type

**./summarise_results.sh greg_door_2016_min**

and then check the *summary.png* file, which should look similarly to Fig 2 in the paper.

You will need to install openCV2.7, libalglib, gnuplot and transfig to run the software.
The temporal models are stored in the *src/models* folder and by implementing the methods of CTemporal.cpp, you can make and test your own method.

### References
1. T.Krajnik, T.Vintr, S.Molina, J.P.Fentanes, G.Cielniak, T.Duckett: <b>[Warped Hypertime Representations for Long-term Autonomy of Mobile Robots](http://raw.githubusercontent.com/wiki/gestom/hypertime/papers/hypertime.pdf)</b> Arxiv, 2018. [[bibtex](http://raw.githubusercontent.com/wiki/gestom/hypertime/papers/hypertime.bib)]
