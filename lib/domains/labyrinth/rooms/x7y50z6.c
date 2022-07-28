inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 50, 6 }));
  set_short( "Corridor - x7y50z6" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y50z6.c",
  "north" : DIR+"/rooms/x7y51z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
