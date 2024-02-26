inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 56, 2 }));
  set_short( "Hallway - x61y56z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y57z2.c",
  "south" : DIR+"/rooms/x61y55z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
