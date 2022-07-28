inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 2 }));
  set_short( "Corridor - x45y44z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y44z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
