inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 54, 9 }));
  set_short( "Hallway - x14y54z9" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y54z9.c",
  "east" : DIR+"/rooms/x15y54z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
