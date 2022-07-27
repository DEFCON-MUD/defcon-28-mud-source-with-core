inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 1 }));
  set_short( "Corridor - x3y32z1" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y32z1.c",
  "south" : DIR+"/rooms/x3y31z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
