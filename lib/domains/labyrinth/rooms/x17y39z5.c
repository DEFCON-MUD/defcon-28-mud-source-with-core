inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 39, 5 }));
  set_short( "Hallway - x17y39z5" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y40z5.c",
  "south" : DIR+"/rooms/x17y38z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
