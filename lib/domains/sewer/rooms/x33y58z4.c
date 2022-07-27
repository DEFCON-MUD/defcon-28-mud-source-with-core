inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 4 }));
  set_short( "Corridor - x33y58z4" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y58z4.c",
  "north" : DIR+"/rooms/x33y59z4.c",
  "south" : DIR+"/rooms/x33y57z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
