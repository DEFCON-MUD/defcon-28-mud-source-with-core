inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 31, 8 }));
  set_short( "Corridor - x41y31z8" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y32z8.c",
  "south" : DIR+"/rooms/x41y30z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
