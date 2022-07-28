inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 50, 8 }));
  set_short( "Hallway - x20y50z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y50z8.c",
  "east" : DIR+"/rooms/x21y50z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
