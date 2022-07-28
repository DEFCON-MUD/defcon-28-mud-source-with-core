inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 36, 1 }));
  set_short( "Passage - x8y36z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y36z1.c",
  "east" : DIR+"/rooms/x9y36z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
