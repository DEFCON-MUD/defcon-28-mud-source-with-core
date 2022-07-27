inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 39, 0 }));
  set_short( "Corridor - x41y39z0" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y40z0.c",
  "south" : DIR+"/rooms/x41y38z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
