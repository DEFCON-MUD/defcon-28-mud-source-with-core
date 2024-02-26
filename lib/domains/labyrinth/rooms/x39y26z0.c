inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 26, 0 }));
  set_short( "Passage - x39y26z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y26z0.c",
  "north" : DIR+"/rooms/x39y27z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
