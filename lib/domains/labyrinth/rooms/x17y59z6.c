inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 59, 6 }));
  set_short( "Hallway - x17y59z6" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y60z6.c",
  "south" : DIR+"/rooms/x17y58z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
