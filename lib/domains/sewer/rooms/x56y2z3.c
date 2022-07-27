inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 3 }));
  set_short( "Passage - x56y2z3" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z3.c",
  "east" : DIR+"/rooms/x57y2z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
