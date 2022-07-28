inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 5 }));
  set_short( "Hallway - x29y56z5" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y57z5.c",
  "south" : DIR+"/rooms/x29y55z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
