inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 32, 8 }));
  set_short( "Passage - x24y32z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y32z8.c",
  "east" : DIR+"/rooms/x25y32z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
