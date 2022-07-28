inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 0 }));
  set_short( "Hallway - x11y42z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y42z0.c",
  "north" : DIR+"/rooms/x11y43z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
