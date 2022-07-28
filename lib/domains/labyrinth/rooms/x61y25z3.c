inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 3 }));
  set_short( "Corridor - x61y25z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z3.c",
  "south" : DIR+"/rooms/x61y24z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
