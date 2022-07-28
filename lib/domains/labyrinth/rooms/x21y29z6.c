inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 29, 6 }));
  set_short( "Hallway - x21y29z6" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y30z6.c",
  "south" : DIR+"/rooms/x21y28z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
