inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 53, 4 }));
  set_short( "Hallway - x47y53z4" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y54z4.c",
  "south" : DIR+"/rooms/x47y52z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
