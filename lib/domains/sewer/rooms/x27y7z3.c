inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 3 }));
  set_short( "Corridor - x27y7z3" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z3.c",
  "south" : DIR+"/rooms/x27y6z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
