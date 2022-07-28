inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 1 }));
  set_short( "Passage - x41y40z1" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z1.c",
  "east" : DIR+"/rooms/x42y40z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
