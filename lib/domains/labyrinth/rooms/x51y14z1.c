inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 14, 1 }));
  set_short( "Hallway - x51y14z1" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y15z1.c",
  "south" : DIR+"/rooms/x51y13z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
