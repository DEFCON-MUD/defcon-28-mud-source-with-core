inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 2 }));
  set_short( "Hallway - x5y52z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y52z2.c",
  "south" : DIR+"/rooms/x5y51z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
