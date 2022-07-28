inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 7 }));
  set_short( "Corridor - x41y48z7" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y48z7.c",
  "south" : DIR+"/rooms/x41y47z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
