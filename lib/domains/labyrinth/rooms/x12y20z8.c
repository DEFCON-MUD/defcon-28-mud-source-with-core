inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 20, 8 }));
  set_short( "Corridor - x12y20z8" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y20z8.c",
  "east" : DIR+"/rooms/x13y20z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
