inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 15, 4 }));
  set_short( "Corridor - x25y15z4" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y16z4.c",
  "south" : DIR+"/rooms/x25y14z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
