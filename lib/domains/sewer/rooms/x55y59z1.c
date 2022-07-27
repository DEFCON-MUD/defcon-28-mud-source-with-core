inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 59, 1 }));
  set_short( "Corridor - x55y59z1" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y60z1.c",
  "south" : DIR+"/rooms/x55y58z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
