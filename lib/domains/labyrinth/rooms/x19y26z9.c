inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 9 }));
  set_short( "Hallway - x19y26z9" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y27z9.c",
  "south" : DIR+"/rooms/x19y25z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
