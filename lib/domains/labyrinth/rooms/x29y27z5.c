inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 5 }));
  set_short( "Corridor - x29y27z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z5.c",
  "south" : DIR+"/rooms/x29y26z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
