inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 28, 1 }));
  set_short( "Hallway - x3y28z1" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y28z1.c",
  "south" : DIR+"/rooms/x3y27z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
