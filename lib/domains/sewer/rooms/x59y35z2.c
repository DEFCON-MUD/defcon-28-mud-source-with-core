inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 35, 2 }));
  set_short( "Hallway - x59y35z2" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y36z2.c",
  "south" : DIR+"/rooms/x59y34z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
