inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 8, 3 }));
  set_short( "Hallway - x47y8z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y9z3.c",
  "south" : DIR+"/rooms/x47y7z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
