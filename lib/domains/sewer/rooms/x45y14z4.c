inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 4 }));
  set_short( "Passage - x45y14z4" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y14z4.c",
  "north" : DIR+"/rooms/x45y15z4.c",
  "south" : DIR+"/rooms/x45y13z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
