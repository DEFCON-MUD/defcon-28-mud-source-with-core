inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 51, 3 }));
  set_short( "Corridor - x53y51z3" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y52z3.c",
  "south" : DIR+"/rooms/x53y50z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
