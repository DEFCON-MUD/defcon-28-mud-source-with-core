inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 45, 0 }));
  set_short( "Hallway - x1y45z0" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y46z0.c",
  "south" : DIR+"/rooms/x1y44z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
