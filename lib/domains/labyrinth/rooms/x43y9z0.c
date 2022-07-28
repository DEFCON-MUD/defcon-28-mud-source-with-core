inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 9, 0 }));
  set_short( "Passage - x43y9z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y10z0.c",
  "south" : DIR+"/rooms/x43y8z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
