inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 0 }));
  set_short( "Hallway - x43y40z0" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y41z0.c",
  "south" : DIR+"/rooms/x43y39z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
