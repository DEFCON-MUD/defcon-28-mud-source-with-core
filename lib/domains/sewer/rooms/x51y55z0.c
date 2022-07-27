inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 55, 0 }));
  set_short( "Corridor - x51y55z0" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y56z0.c",
  "south" : DIR+"/rooms/x51y54z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
