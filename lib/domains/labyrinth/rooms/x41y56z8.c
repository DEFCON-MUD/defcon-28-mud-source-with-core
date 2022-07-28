inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 8 }));
  set_short( "Passage - x41y56z8" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z8.c",
  "north" : DIR+"/rooms/x41y57z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
