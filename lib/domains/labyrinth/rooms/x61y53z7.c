inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 53, 7 }));
  set_short( "Hallway - x61y53z7" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y54z7.c",
  "south" : DIR+"/rooms/x61y52z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
