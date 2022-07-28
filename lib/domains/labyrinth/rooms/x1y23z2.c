inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 2 }));
  set_short( "Hallway - x1y23z2" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z2.c",
  "south" : DIR+"/rooms/x1y22z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
