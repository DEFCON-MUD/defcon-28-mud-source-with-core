inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 60, 7 }));
  set_short( "Passage - x24y60z7" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y60z7.c",
  "east" : DIR+"/rooms/x25y60z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
