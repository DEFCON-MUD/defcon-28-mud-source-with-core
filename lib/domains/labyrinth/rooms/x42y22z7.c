inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 22, 7 }));
  set_short( "Hallway - x42y22z7" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y22z7.c",
  "east" : DIR+"/rooms/x43y22z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
