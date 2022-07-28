inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 29, 8 }));
  set_short( "Corridor - x11y29z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y30z8.c",
  "south" : DIR+"/rooms/x11y28z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
