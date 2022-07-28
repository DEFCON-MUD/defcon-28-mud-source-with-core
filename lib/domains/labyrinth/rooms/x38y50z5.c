inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 50, 5 }));
  set_short( "Hallway - x38y50z5" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y50z5.c",
  "east" : DIR+"/rooms/x39y50z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
