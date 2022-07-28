inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 8 }));
  set_short( "Hallway - x47y52z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y52z8.c",
  "north" : DIR+"/rooms/x47y53z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
