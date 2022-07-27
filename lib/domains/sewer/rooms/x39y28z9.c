inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 9 }));
  set_short( "Corridor - x39y28z9" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y28z9.c",
  "north" : DIR+"/rooms/x39y29z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
