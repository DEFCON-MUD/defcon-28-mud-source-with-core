inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 8, 4 }));
  set_short( "Passage - x54y8z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y8z4.c",
  "east" : DIR+"/rooms/x55y8z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
