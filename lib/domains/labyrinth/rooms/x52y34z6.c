inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 34, 6 }));
  set_short( "Hallway - x52y34z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y34z6.c",
  "east" : DIR+"/rooms/x53y34z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
