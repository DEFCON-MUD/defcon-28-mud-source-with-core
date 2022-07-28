inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 9 }));
  set_short( "Hallway - x37y22z9" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y22z9.c",
  "south" : DIR+"/rooms/x37y21z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
