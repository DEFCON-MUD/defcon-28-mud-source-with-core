inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 4 }));
  set_short( "Hallway - x1y5z4" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z4.c",
  "south" : DIR+"/rooms/x1y4z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
