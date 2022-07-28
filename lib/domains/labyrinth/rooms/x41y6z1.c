inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 1 }));
  set_short( "Hallway - x41y6z1" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y6z1.c",
  "east" : DIR+"/rooms/x42y6z1.c",
  "north" : DIR+"/rooms/x41y7z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
