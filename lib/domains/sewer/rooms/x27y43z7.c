inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 43, 7 }));
  set_short( "Hallway - x27y43z7" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y44z7.c",
  "south" : DIR+"/rooms/x27y42z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
