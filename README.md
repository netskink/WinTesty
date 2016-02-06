# winTesty

You have got to be kidding me.

So, I am thougt I would bang out rather quickly a visual studio thing today.  I installed visual studio 2015 Community Edition and 
during the process it uninstalled my existing git tools.  Ok no problem. Press on.

Well I forgot, it did cause me to reboot about 10 times and stall during the install because it required patching to my
windows 10 installation which was up to date when I started this nightmare.

Anyway, so I got to the point where I had windows 10 up to date, git command line tools uninstalled but oddly enough my github windows
app which I seldom use still installed.

Then I thought fsck it, i'll practice some c++ doing the edx c++ class from microsoft.  I did the entire class in one sitting.  Or,
at least enough to pass.  I thought well, I will quickly upload this to github.  I don't know how to integrate git with devstudio, visual
studio, or whatever the name is currently.

Oh my gawd, dev studio crashed, fscked up numerous times.  So what, press on.

I got into problems where I would use the tool to create a repot on github and then publish/sync or whatever the button would say
and it would crash.  At one point it did update my github gui.  After many attempts it seemed to be create repot, view changes
and then commit with sync and not commit with push to work.

Super, so I thought well, the c++ class was pretty simple. I need to create a some unit test code and some STL code.  That should be
simple enough.

Well fsck me, that ain't gonna work.  Read though a bunch of unit tests can't find function blah posts.  Well rather than copying
the app source into my test code, I figured I would monkey with the exports and project settings.  That did not work.  Finally I was
like I give up.  If I can't force intermeddiate obj files to be kept around I'll do it the microsoft way and create a dll.

So here I am.  I have a native windows app, a dll for my STL samples and a unit test.  Three projects. Sounds flexible enough to 
commit and work on.  Holy shit, git create, publish segfaults my visual studio again repeatly.  So here I am.  Now the code
is all up here.  Gawd knows but here is what I did.

1.  Vis studio, create repot.
2.  Chrome dele repot.
3.  Publish repot, sync, shake chickens foot.

I know it must be a problem with the repot needs to be empty without a readme or something like that, but seriously this can kill an IDE?

Fsck microsoft.  I had shit to do today and I wasted hours on this.  I'm not angry.  I'm just simply frustrated that I got away from
this company and now here I am dorking with their shit.
