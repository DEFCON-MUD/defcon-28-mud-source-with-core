inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 2 }));
  set_short( "Hallway - x1y54z2" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y54z2.c",
  "north" : DIR+"/rooms/x1y55z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
