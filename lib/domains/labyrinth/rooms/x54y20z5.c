inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 20, 5 }));
  set_short( "Hallway - x54y20z5" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y20z5.c",
  "east" : DIR+"/rooms/x55y20z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
