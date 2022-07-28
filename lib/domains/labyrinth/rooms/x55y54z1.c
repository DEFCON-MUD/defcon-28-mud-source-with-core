inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 1 }));
  set_short( "Passage - x55y54z1" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y54z1.c",
  "east" : DIR+"/rooms/x56y54z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
