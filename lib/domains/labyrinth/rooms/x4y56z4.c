inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 56, 4 }));
  set_short( "Passage - x4y56z4" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y56z4.c",
  "east" : DIR+"/rooms/x5y56z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
