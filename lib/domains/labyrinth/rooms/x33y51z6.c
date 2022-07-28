inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 51, 6 }));
  set_short( "Passage - x33y51z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y52z6.c",
  "south" : DIR+"/rooms/x33y50z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
