inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 60, 6 }));
  set_short( "Hallway - x15y60z6" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y60z6.c",
  "north" : DIR+"/rooms/x15y61z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
