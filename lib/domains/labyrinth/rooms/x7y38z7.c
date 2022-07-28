inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 38, 7 }));
  set_short( "Corridor - x7y38z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y38z7.c",
  "north" : DIR+"/rooms/x7y39z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
