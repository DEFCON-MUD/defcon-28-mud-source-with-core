inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 9 }));
  set_short( "Hallway - x41y28z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z9.c",
  "east" : DIR+"/rooms/x42y28z9.c",
  "north" : DIR+"/rooms/x41y29z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
