inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 64, 2 }));
  set_short( "Passage - x23y64z2" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y64z2.c",
  "east" : DIR+"/rooms/x24y64z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
