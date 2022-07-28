inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 0 }));
  set_short( "Hallway - x15y26z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y26z0.c",
  "north" : DIR+"/rooms/x15y27z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
