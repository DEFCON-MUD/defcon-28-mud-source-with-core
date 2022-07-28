inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 0 }));
  set_short( "Corridor - x47y36z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y37z0.c",
  "south" : DIR+"/rooms/x47y35z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
