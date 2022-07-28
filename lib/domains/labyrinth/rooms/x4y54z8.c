inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 54, 8 }));
  set_short( "Hallway - x4y54z8" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y54z8.c",
  "east" : DIR+"/rooms/x5y54z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
