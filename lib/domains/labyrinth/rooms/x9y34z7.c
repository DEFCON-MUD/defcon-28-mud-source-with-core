inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 7 }));
  set_short( "Corridor - x9y34z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y34z7.c",
  "south" : DIR+"/rooms/x9y33z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
