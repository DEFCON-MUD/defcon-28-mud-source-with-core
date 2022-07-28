inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 7 }));
  set_short( "Passage - x37y32z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y32z7.c",
  "south" : DIR+"/rooms/x37y31z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
