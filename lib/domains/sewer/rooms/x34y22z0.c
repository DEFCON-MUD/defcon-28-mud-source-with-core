inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 22, 0 }));
  set_short( "Passage - x34y22z0" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y22z0.c",
  "east" : DIR+"/rooms/x35y22z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
