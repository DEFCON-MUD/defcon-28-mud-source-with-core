inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 56, 0 }));
  set_short( "Corridor - x8y56z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y56z0.c",
  "east" : DIR+"/rooms/x9y56z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
