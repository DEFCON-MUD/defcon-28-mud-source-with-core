inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 9 }));
  set_short( "Corridor - x33y62z9" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y62z9.c",
  "south" : DIR+"/rooms/x33y61z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
