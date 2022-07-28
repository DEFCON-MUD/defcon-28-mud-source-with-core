inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 1 }));
  set_short( "Hallway - x29y44z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z1.c",
  "south" : DIR+"/rooms/x29y43z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
