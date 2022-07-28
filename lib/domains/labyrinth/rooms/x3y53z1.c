inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 53, 1 }));
  set_short( "Passage - x3y53z1" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y54z1.c",
  "south" : DIR+"/rooms/x3y52z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
