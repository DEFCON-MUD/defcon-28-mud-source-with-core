inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 16, 7 }));
  set_short( "Corridor - x44y16z7" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y16z7.c",
  "east" : DIR+"/rooms/x45y16z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
