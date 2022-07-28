inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 0 }));
  set_short( "Passage - x18y2z0" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z0.c",
  "east" : DIR+"/rooms/x19y2z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
