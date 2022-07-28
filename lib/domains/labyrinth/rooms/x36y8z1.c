inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 8, 1 }));
  set_short( "Passage - x36y8z1" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y8z1.c",
  "east" : DIR+"/rooms/x37y8z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
