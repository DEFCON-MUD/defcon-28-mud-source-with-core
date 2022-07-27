inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 30, 5 }));
  set_short( "Passage - x2y30z5" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y30z5.c",
  "east" : DIR+"/rooms/x3y30z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
