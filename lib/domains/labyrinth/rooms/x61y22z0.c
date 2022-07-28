inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 22, 0 }));
  set_short( "Corridor - x61y22z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y22z0.c",
  "north" : DIR+"/rooms/x61y23z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
