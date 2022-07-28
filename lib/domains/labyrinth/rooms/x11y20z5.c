inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 5 }));
  set_short( "Hallway - x11y20z5" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y20z5.c",
  "north" : DIR+"/rooms/x11y21z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
