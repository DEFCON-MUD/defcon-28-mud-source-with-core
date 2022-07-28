inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 32, 1 }));
  set_short( "Passage - x30y32z1" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y32z1.c",
  "east" : DIR+"/rooms/x31y32z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
