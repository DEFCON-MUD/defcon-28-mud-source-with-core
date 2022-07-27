inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 64, 1 }));
  set_short( "Corridor - x44y64z1" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y64z1.c",
  "east" : DIR+"/rooms/x45y64z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
