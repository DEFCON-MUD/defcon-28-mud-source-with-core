inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 8, 7 }));
  set_short( "Hallway - x19y8z7" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y8z7.c",
  "north" : DIR+"/rooms/x19y9z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
