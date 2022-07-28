inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 5 }));
  set_short( "Hallway - x35y56z5" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "south" : DIR+"/rooms/x35y55z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
