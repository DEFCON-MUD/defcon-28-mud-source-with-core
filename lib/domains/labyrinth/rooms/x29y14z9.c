inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 9 }));
  set_short( "Hallway - x29y14z9" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y14z9.c",
  "north" : DIR+"/rooms/x29y15z9.c",
  "south" : DIR+"/rooms/x29y13z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
