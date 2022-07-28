inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 7 }));
  set_short( "Hallway - x4y60z7" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z7.c",
  "east" : DIR+"/rooms/x5y60z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
