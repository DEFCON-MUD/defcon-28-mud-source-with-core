inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 32, 2 }));
  set_short( "Hallway - x52y32z2" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y32z2.c",
  "east" : DIR+"/rooms/x53y32z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
