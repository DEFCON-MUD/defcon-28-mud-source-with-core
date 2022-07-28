inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 2 }));
  set_short( "Passage - x21y28z2" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y28z2.c",
  "east" : DIR+"/rooms/x22y28z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
