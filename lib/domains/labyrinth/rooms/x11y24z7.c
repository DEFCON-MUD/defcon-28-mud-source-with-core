inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 7 }));
  set_short( "Passage - x11y24z7" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y24z7.c",
  "south" : DIR+"/rooms/x11y23z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
