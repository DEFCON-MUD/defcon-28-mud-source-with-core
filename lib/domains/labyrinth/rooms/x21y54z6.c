inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 6 }));
  set_short( "Hallway - x21y54z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y54z6.c",
  "north" : DIR+"/rooms/x21y55z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
