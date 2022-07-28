inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 22, 8 }));
  set_short( "Hallway - x39y22z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y22z8.c",
  "east" : DIR+"/rooms/x40y22z8.c",
  "south" : DIR+"/rooms/x39y21z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
