inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "dungeon" );
  set_short( "Dungeon" );
set_objects( DIR+"/monsters/rowhammer.c");
 set_exits( ([
  "south" : DIR+"/rooms/4-a.c",
  "east" : DIR+"/rooms/3-b.c"
  ]) );
  set_long( "The floors and walls appear to be made of jade while the roof appears to be dripping some kind of red liquid.  The floors and wall also appear to be covered in some kind of dust.\n\nThe dungeon continues to the south, and east.%^RESET%^");
}
