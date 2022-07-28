inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 8 }));
  set_short( "Hallway - x31y64z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z8.c",
  "east" : DIR+"/rooms/x32y64z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
