inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 61, 4 }));
  set_short( "Hallway - x43y61z4" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y62z4.c",
  "south" : DIR+"/rooms/x43y60z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
