inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "dungeon" );
  set_short( "Dungeon" );
set_objects( DIR+"/monsters/ms08-067.c");
 set_exits( ([
  "south" : DIR+"/rooms/8-a.c"
  ]) );
  set_long( "The floors and walls appear to be made of quartz while the roof appears to be dripping some kind of green liquid.  The floors and wall also appear to be covered in some kind of slime.\n\nThe dungeon continues to the south.%^RESET%^");
}
