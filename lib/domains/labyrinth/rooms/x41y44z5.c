inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 5 }));
  set_short( "Hallway - x41y44z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "south" : DIR+"/rooms/x41y43z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
