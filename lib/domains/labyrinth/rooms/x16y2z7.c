inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 2, 7 }));
  set_short( "Passage - x16y2z7" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y2z7.c",
  "east" : DIR+"/rooms/x17y2z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
