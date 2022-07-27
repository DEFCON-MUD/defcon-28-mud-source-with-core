inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 29, 0 }));
  set_short( "Corridor - x25y29z0" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y30z0.c",
  "south" : DIR+"/rooms/x25y28z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
