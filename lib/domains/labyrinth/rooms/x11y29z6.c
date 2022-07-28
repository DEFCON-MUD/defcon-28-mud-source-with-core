inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 29, 6 }));
  set_short( "Corridor - x11y29z6" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y30z6.c",
  "south" : DIR+"/rooms/x11y28z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
