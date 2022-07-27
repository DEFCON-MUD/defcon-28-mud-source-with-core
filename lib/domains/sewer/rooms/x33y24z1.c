inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 1 }));
  set_short( "Hallway - x33y24z1" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y24z1.c",
  "north" : DIR+"/rooms/x33y25z1.c",
  "south" : DIR+"/rooms/x33y23z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
