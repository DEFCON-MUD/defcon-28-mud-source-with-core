inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 0, 0 }));
  set_short( "Hallway - x19y0z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y0z0.c",
  "east" : DIR+"/rooms/x20y0z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
