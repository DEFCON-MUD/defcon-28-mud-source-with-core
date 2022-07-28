inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 5 }));
  set_short( "Corridor - x15y6z5" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y6z5.c",
  "south" : DIR+"/rooms/x15y5z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
