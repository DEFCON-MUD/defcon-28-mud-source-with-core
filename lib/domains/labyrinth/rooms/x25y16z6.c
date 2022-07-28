inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 6 }));
  set_short( "Hallway - x25y16z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y16z6.c",
  "east" : DIR+"/rooms/x26y16z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
