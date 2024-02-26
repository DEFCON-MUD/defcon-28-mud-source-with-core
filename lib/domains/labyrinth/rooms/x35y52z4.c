inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 4 }));
  set_short( "Passage - x35y52z4" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y52z4.c",
  "south" : DIR+"/rooms/x35y51z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
