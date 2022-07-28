inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 8, 4 }));
  set_short( "Hallway - x13y8z4" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y9z4.c",
  "south" : DIR+"/rooms/x13y7z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
