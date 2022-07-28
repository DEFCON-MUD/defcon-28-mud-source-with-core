inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 0 }));
  set_short( "Corridor - x5y17z0" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z0.c",
  "south" : DIR+"/rooms/x5y16z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
