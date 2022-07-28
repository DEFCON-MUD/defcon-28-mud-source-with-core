inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 26, 7 }));
  set_short( "Passage - x52y26z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y26z7.c",
  "east" : DIR+"/rooms/x53y26z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
