inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 45, 4 }));
  set_short( "Hallway - x15y45z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y46z4.c",
  "south" : DIR+"/rooms/x15y44z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
