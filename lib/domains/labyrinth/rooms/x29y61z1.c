inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 61, 1 }));
  set_short( "Passage - x29y61z1" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y62z1.c",
  "south" : DIR+"/rooms/x29y60z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
