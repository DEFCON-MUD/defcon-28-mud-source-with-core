inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 33, 6 }));
  set_short( "Hallway - x17y33z6" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y34z6.c",
  "south" : DIR+"/rooms/x17y32z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
