inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 43, 0 }));
  set_short( "Corridor - x7y43z0" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y44z0.c",
  "south" : DIR+"/rooms/x7y42z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
