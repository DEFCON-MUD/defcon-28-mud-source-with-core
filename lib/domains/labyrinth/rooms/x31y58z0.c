inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 0 }));
  set_short( "Hallway - x31y58z0" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y58z0.c",
  "east" : DIR+"/rooms/x32y58z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
