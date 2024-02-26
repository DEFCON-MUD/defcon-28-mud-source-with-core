inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 4 }));
  set_short( "Passage - x43y54z4" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y54z4.c",
  "south" : DIR+"/rooms/x43y53z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
