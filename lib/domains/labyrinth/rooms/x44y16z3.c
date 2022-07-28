inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 16, 3 }));
  set_short( "Hallway - x44y16z3" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y16z3.c",
  "east" : DIR+"/rooms/x45y16z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
