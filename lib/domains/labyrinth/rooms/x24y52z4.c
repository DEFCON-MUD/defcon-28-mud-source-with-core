inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 52, 4 }));
  set_short( "Passage - x24y52z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y52z4.c",
  "east" : DIR+"/rooms/x25y52z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
