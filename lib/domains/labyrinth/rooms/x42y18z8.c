inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 18, 8 }));
  set_short( "Passage - x42y18z8" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y18z8.c",
  "east" : DIR+"/rooms/x43y18z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
