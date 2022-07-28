inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 44, 7 }));
  set_short( "Hallway - x42y44z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y44z7.c",
  "east" : DIR+"/rooms/x43y44z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
