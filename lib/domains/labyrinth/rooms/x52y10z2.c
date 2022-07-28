inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 10, 2 }));
  set_short( "Corridor - x52y10z2" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y10z2.c",
  "east" : DIR+"/rooms/x53y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
