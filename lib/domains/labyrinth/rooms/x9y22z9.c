inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 9 }));
  set_short( "Hallway - x9y22z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y22z9.c",
  "north" : DIR+"/rooms/x9y23z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
