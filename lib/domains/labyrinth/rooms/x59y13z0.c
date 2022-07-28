inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 13, 0 }));
  set_short( "Hallway - x59y13z0" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y14z0.c",
  "south" : DIR+"/rooms/x59y12z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
