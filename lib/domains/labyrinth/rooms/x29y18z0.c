inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 0 }));
  set_short( "Hallway - x29y18z0" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z0.c",
  "south" : DIR+"/rooms/x29y17z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
