inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 4 }));
  set_short( "Hallway - x31y2z4" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y2z4.c",
  "north" : DIR+"/rooms/x31y3z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
