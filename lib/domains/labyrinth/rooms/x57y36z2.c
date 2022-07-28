inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 2 }));
  set_short( "Hallway - x57y36z2" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y37z2.c",
  "south" : DIR+"/rooms/x57y35z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
