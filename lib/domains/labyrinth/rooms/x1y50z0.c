inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 0 }));
  set_short( "Hallway - x1y50z0" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y50z0.c",
  "south" : DIR+"/rooms/x1y49z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
