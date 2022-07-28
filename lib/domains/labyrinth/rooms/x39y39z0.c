inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 39, 0 }));
  set_short( "Corridor - x39y39z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y40z0.c",
  "south" : DIR+"/rooms/x39y38z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
