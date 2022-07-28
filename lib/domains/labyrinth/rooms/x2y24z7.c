inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 24, 7 }));
  set_short( "Passage - x2y24z7" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y24z7.c",
  "east" : DIR+"/rooms/x3y24z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
