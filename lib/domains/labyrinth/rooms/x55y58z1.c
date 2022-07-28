inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 1 }));
  set_short( "Corridor - x55y58z1" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y58z1.c",
  "north" : DIR+"/rooms/x55y59z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
