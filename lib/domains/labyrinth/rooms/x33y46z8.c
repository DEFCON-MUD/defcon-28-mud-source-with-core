inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 8 }));
  set_short( "Corridor - x33y46z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z8.c",
  "east" : DIR+"/rooms/x34y46z8.c",
  "north" : DIR+"/rooms/x33y47z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
