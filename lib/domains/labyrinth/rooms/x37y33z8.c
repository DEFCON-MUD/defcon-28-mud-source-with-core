inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 33, 8 }));
  set_short( "Hallway - x37y33z8" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y34z8.c",
  "south" : DIR+"/rooms/x37y32z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
