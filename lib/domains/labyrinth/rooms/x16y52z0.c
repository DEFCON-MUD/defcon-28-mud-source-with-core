inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 52, 0 }));
  set_short( "Passage - x16y52z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y52z0.c",
  "east" : DIR+"/rooms/x17y52z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
