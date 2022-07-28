inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 44, 1 }));
  set_short( "Passage - x32y44z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y44z1.c",
  "east" : DIR+"/rooms/x33y44z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
