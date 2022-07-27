inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 1 }));
  set_short( "Corridor - x13y32z1" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y32z1.c",
  "north" : DIR+"/rooms/x13y33z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
