inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 60, 3 }));
  set_short( "Passage - x46y60z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y60z3.c",
  "east" : DIR+"/rooms/x47y60z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
