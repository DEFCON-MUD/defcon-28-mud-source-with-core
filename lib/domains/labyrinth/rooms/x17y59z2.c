inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 59, 2 }));
  set_short( "Hallway - x17y59z2" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y60z2.c",
  "south" : DIR+"/rooms/x17y58z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
