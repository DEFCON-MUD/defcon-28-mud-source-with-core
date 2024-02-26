inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 8 }));
  set_short( "Hallway - x41y46z8" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y47z8.c",
  "south" : DIR+"/rooms/x41y45z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
