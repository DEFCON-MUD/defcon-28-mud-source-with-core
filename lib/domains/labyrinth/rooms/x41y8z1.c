inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 1 }));
  set_short( "Passage - x41y8z1" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y9z1.c",
  "south" : DIR+"/rooms/x41y7z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
