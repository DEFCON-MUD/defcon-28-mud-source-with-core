inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 29, 5 }));
  set_short( "Corridor - x15y29z5" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y30z5.c",
  "south" : DIR+"/rooms/x15y28z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
