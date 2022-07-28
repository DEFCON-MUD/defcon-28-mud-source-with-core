inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 4, 5 }));
  set_short( "Corridor - x26y4z5" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y4z5.c",
  "east" : DIR+"/rooms/x27y4z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
