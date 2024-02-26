inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 4 }));
  set_short( "Hallway - x59y58z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y58z4.c",
  "north" : DIR+"/rooms/x59y59z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
