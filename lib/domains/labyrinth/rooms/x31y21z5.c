inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 5 }));
  set_short( "Hallway - x31y21z5" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z5.c",
  "south" : DIR+"/rooms/x31y20z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
