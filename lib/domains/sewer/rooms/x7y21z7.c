inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 7 }));
  set_short( "Hallway - x7y21z7" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z7.c",
  "south" : DIR+"/rooms/x7y20z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
