inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 5 }));
  set_short( "Passage - x61y38z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y38z5.c",
  "north" : DIR+"/rooms/x61y39z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
