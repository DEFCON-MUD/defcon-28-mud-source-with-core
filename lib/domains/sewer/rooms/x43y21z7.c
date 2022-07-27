inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 21, 7 }));
  set_short( "Passage - x43y21z7" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y22z7.c",
  "south" : DIR+"/rooms/x43y20z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
