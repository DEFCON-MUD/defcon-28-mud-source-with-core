inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 1 }));
  set_short( "Corridor - x51y44z1" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y44z1.c",
  "east" : DIR+"/rooms/x52y44z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
