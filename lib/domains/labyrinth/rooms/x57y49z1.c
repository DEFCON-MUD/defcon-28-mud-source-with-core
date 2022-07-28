inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 49, 1 }));
  set_short( "Hallway - x57y49z1" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y50z1.c",
  "south" : DIR+"/rooms/x57y48z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
