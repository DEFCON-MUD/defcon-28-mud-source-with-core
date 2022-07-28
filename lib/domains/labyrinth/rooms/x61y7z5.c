inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 7, 5 }));
  set_short( "Hallway - x61y7z5" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y8z5.c",
  "south" : DIR+"/rooms/x61y6z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
