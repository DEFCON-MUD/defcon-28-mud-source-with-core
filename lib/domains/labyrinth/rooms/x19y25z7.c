inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 25, 7 }));
  set_short( "Corridor - x19y25z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y26z7.c",
  "south" : DIR+"/rooms/x19y24z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
