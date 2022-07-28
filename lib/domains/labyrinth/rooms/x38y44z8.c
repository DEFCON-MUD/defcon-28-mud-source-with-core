inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 44, 8 }));
  set_short( "Hallway - x38y44z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y44z8.c",
  "east" : DIR+"/rooms/x39y44z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
