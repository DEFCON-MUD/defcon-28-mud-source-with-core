inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 42, 6 }));
  set_short( "Hallway - x3y42z6" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y43z6.c",
  "south" : DIR+"/rooms/x3y41z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
