inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 6 }));
  set_short( "Passage - x31y32z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z6.c",
  "north" : DIR+"/rooms/x31y33z6.c",
  "south" : DIR+"/rooms/x31y31z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
