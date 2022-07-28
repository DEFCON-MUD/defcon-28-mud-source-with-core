inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 8, 6 }));
  set_short( "Passage - x4y8z6" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y8z6.c",
  "east" : DIR+"/rooms/x5y8z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
