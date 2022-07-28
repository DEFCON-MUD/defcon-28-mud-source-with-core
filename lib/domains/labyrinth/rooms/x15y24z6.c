inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 6 }));
  set_short( "Passage - x15y24z6" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y24z6.c",
  "south" : DIR+"/rooms/x15y23z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
