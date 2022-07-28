inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 0 }));
  set_short( "Corridor - x55y42z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z0.c",
  "north" : DIR+"/rooms/x55y43z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
