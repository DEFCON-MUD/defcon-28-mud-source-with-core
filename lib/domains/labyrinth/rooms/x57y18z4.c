inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 4 }));
  set_short( "Hallway - x57y18z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y19z4.c",
  "south" : DIR+"/rooms/x57y17z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
