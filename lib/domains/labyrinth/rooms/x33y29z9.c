inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 29, 9 }));
  set_short( "Passage - x33y29z9" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y30z9.c",
  "south" : DIR+"/rooms/x33y28z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
