inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 6 }));
  set_short( "Hallway - x27y44z6" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y44z6.c",
  "south" : DIR+"/rooms/x27y43z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
