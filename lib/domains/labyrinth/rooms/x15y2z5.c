inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 2, 5 }));
  set_short( "Hallway - x15y2z5" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y2z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
