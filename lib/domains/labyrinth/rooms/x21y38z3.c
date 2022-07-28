inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 3 }));
  set_short( "Hallway - x21y38z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y39z3.c",
  "south" : DIR+"/rooms/x21y37z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
