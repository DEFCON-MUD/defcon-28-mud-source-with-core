inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 8 }));
  set_short( "Corridor - x21y44z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y45z8.c",
  "south" : DIR+"/rooms/x21y43z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
