inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 37, 2 }));
  set_short( "Passage - x57y37z2" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y38z2.c",
  "south" : DIR+"/rooms/x57y36z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
