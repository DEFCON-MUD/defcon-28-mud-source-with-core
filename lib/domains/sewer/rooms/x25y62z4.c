inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 4 }));
  set_short( "Corridor - x25y62z4" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y62z4.c",
  "south" : DIR+"/rooms/x25y61z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
