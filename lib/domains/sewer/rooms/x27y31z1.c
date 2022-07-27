inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 31, 1 }));
  set_short( "Corridor - x27y31z1" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y32z1.c",
  "south" : DIR+"/rooms/x27y30z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
