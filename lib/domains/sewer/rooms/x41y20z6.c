inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 6 }));
  set_short( "Hallway - x41y20z6" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z6.c",
  "north" : DIR+"/rooms/x41y21z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
