inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 61, 2 }));
  set_short( "Hallway - x35y61z2" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y62z2.c",
  "south" : DIR+"/rooms/x35y60z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
