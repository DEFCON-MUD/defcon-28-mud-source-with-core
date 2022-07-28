inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 4 }));
  set_short( "Hallway - x9y2z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y2z4.c",
  "east" : DIR+"/rooms/x10y2z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
