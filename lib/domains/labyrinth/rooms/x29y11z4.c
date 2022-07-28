inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 11, 4 }));
  set_short( "Corridor - x29y11z4" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y12z4.c",
  "south" : DIR+"/rooms/x29y10z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
