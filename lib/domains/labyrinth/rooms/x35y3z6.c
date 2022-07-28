inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 3, 6 }));
  set_short( "Hallway - x35y3z6" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y4z6.c",
  "south" : DIR+"/rooms/x35y2z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
