inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 7 }));
  set_short( "Hallway - x29y22z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y22z7.c",
  "east" : DIR+"/rooms/x30y22z7.c",
  "north" : DIR+"/rooms/x29y23z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
