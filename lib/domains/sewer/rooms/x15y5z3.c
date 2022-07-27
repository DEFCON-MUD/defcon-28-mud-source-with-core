inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 5, 3 }));
  set_short( "Corridor - x15y5z3" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y6z3.c",
  "south" : DIR+"/rooms/x15y4z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
