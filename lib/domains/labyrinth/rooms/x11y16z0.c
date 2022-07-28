inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 0 }));
  set_short( "Corridor - x11y16z0" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y16z0.c",
  "north" : DIR+"/rooms/x11y17z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
