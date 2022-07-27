inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 7 }));
  set_short( "Hallway - x33y50z7" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y50z7.c",
  "south" : DIR+"/rooms/x33y49z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
