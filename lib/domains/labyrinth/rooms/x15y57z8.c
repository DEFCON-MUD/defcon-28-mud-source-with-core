inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 57, 8 }));
  set_short( "Passage - x15y57z8" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y58z8.c",
  "south" : DIR+"/rooms/x15y56z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
