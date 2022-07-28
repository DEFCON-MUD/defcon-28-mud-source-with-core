inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 8 }));
  set_short( "Hallway - x57y14z8" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y15z8.c",
  "south" : DIR+"/rooms/x57y13z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
