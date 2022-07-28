inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 1 }));
  set_short( "Passage - x7y42z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y43z1.c",
  "south" : DIR+"/rooms/x7y41z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
