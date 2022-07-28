inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 58, 6 }));
  set_short( "Passage - x30y58z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y58z6.c",
  "east" : DIR+"/rooms/x31y58z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
