inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 8 }));
  set_short( "Passage - x9y34z8" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y34z8.c",
  "east" : DIR+"/rooms/x10y34z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
