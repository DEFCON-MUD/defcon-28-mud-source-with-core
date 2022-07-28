inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 24, 2 }));
  set_short( "Passage - x34y24z2" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y24z2.c",
  "east" : DIR+"/rooms/x35y24z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
