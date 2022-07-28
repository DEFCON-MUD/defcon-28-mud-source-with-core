inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 20, 2 }));
  set_short( "Passage - x36y20z2" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y20z2.c",
  "east" : DIR+"/rooms/x37y20z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
