inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 8 }));
  set_short( "Corridor - x51y64z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z8.c",
  "east" : DIR+"/rooms/x52y64z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
