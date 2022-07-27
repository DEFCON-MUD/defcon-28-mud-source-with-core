inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 21, 1 }));
  set_short( "Hallway - x57y21z1" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y22z1.c",
  "south" : DIR+"/rooms/x57y20z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
