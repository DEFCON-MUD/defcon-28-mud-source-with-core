inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 5 }));
  set_short( "Corridor - x47y54z5" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y55z5.c",
  "south" : DIR+"/rooms/x47y53z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
