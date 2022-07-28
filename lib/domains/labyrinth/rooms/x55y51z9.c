inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 51, 9 }));
  set_short( "Corridor - x55y51z9" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y52z9.c",
  "south" : DIR+"/rooms/x55y50z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
