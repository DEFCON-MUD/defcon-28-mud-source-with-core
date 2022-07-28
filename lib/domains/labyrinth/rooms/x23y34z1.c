inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 34, 1 }));
  set_short( "Hallway - x23y34z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y35z1.c",
  "south" : DIR+"/rooms/x23y33z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
