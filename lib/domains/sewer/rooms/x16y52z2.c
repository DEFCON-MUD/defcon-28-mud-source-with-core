inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 52, 2 }));
  set_short( "Passage - x16y52z2" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y52z2.c",
  "east" : DIR+"/rooms/x17y52z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
