inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 1 }));
  set_short( "Hallway - x23y58z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y58z1.c",
  "east" : DIR+"/rooms/x24y58z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
