inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 1 }));
  set_short( "Passage - x15y6z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y6z1.c",
  "south" : DIR+"/rooms/x15y5z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
