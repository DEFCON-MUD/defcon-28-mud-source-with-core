inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 1 }));
  set_short( "Hallway - x11y19z1" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z1.c",
  "south" : DIR+"/rooms/x11y18z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
