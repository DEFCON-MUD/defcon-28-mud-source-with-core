inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 19, 1 }));
  set_short( "Corridor - x61y19z1" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y20z1.c",
  "south" : DIR+"/rooms/x61y18z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
