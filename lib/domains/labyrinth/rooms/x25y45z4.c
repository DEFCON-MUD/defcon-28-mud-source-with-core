inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 45, 4 }));
  set_short( "Hallway - x25y45z4" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y46z4.c",
  "south" : DIR+"/rooms/x25y44z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
