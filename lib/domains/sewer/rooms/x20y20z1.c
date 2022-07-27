inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 20, 1 }));
  set_short( "Hallway - x20y20z1" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y20z1.c",
  "east" : DIR+"/rooms/x21y20z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
