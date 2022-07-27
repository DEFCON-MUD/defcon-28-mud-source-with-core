inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 6 }));
  set_short( "Corridor - x3y48z6" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y48z6.c",
  "north" : DIR+"/rooms/x3y49z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
