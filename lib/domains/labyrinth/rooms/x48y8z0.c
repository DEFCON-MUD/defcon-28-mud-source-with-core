inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 8, 0 }));
  set_short( "Corridor - x48y8z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y8z0.c",
  "east" : DIR+"/rooms/x49y8z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
