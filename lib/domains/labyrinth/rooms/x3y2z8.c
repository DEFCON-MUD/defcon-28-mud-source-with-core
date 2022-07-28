inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 2, 8 }));
  set_short( "Hallway - x3y2z8" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y2z8.c",
  "east" : DIR+"/rooms/x4y2z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
