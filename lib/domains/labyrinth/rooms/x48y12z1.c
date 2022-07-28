inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 12, 1 }));
  set_short( "Passage - x48y12z1" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y12z1.c",
  "east" : DIR+"/rooms/x49y12z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
