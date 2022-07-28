inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 9 }));
  set_short( "Corridor - x41y36z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y36z9.c",
  "south" : DIR+"/rooms/x41y35z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
