inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 1 }));
  set_short( "Corridor - x53y8z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y9z1.c",
  "south" : DIR+"/rooms/x53y7z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
