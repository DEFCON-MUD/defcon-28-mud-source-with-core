inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 4 }));
  set_short( "Corridor - x33y48z4" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y49z4.c",
  "south" : DIR+"/rooms/x33y47z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
