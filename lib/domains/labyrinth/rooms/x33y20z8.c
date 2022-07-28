inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 20, 8 }));
  set_short( "Hallway - x33y20z8" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y20z8.c",
  "east" : DIR+"/rooms/x34y20z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
