inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 28, 1 }));
  set_short( "Passage - x18y28z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y28z1.c",
  "east" : DIR+"/rooms/x19y28z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
