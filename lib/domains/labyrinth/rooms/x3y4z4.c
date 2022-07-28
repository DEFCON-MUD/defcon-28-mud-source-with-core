inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 4 }));
  set_short( "Corridor - x3y4z4" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y4z4.c",
  "north" : DIR+"/rooms/x3y5z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
