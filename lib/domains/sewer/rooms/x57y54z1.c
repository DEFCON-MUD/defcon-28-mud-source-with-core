inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 1 }));
  set_short( "Corridor - x57y54z1" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y54z1.c",
  "north" : DIR+"/rooms/x57y55z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
