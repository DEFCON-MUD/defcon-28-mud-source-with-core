inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 25, 1 }));
  set_short( "Hallway - x51y25z1" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y26z1.c",
  "south" : DIR+"/rooms/x51y24z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
