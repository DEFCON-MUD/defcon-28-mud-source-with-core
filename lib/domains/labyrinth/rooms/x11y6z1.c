inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 1 }));
  set_short( "Hallway - x11y6z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y6z1.c",
  "south" : DIR+"/rooms/x11y5z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
