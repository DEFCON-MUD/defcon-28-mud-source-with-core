inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 5 }));
  set_short( "Passage - x51y48z5" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y48z5.c",
  "south" : DIR+"/rooms/x51y47z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
