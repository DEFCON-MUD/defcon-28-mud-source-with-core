inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 28, 6 }));
  set_short( "Corridor - x14y28z6" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y28z6.c",
  "east" : DIR+"/rooms/x15y28z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
