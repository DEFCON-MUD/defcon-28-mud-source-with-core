inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 37, 6 }));
  set_short( "Passage - x41y37z6" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y38z6.c",
  "south" : DIR+"/rooms/x41y36z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
