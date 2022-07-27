inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 2 }));
  set_short( "Passage - x57y40z2" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y41z2.c",
  "south" : DIR+"/rooms/x57y39z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
