inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 5 }));
  set_short( "Hallway - x1y55z5" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z5.c",
  "south" : DIR+"/rooms/x1y54z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
