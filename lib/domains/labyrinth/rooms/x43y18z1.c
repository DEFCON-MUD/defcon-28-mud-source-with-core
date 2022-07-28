inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 1 }));
  set_short( "Hallway - x43y18z1" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y18z1.c",
  "south" : DIR+"/rooms/x43y17z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
