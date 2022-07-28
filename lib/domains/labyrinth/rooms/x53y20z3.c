inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 20, 3 }));
  set_short( "Hallway - x53y20z3" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y20z3.c",
  "east" : DIR+"/rooms/x54y20z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
