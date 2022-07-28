inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 2 }));
  set_short( "Passage - x41y62z2" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y62z2.c",
  "east" : DIR+"/rooms/x42y62z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
