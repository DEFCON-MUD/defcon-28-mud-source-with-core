inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 5 }));
  set_short( "Hallway - x11y2z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y2z5.c",
  "north" : DIR+"/rooms/x11y3z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
