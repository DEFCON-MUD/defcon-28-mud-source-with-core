inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 6 }));
  set_short( "Corridor - x49y52z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y52z6.c",
  "north" : DIR+"/rooms/x49y53z6.c",
  "south" : DIR+"/rooms/x49y51z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
