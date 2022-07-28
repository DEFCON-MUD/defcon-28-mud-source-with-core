inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 9 }));
  set_short( "Hallway - x33y32z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y32z9.c",
  "south" : DIR+"/rooms/x33y31z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
