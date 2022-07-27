inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 6 }));
  set_short( "Passage - x25y28z6" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z6.c",
  "north" : DIR+"/rooms/x25y29z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
