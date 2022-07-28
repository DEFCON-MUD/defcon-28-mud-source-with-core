inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 54, 6 }));
  set_short( "Corridor - x20y54z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y54z6.c",
  "east" : DIR+"/rooms/x21y54z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
