inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 8, 9 }));
  set_short( "Corridor - x57y8z9" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y9z9.c",
  "south" : DIR+"/rooms/x57y7z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
