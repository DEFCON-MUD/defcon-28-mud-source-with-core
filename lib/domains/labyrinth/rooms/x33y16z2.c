inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 16, 2 }));
  set_short( "Passage - x33y16z2" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y16z2.c",
  "north" : DIR+"/rooms/x33y17z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
