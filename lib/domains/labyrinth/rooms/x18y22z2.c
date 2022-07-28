inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 22, 2 }));
  set_short( "Passage - x18y22z2" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y22z2.c",
  "east" : DIR+"/rooms/x19y22z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
