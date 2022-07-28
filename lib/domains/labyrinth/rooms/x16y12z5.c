inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 12, 5 }));
  set_short( "Passage - x16y12z5" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y12z5.c",
  "east" : DIR+"/rooms/x17y12z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
