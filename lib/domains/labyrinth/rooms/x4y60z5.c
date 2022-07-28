inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 5 }));
  set_short( "Corridor - x4y60z5" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z5.c",
  "east" : DIR+"/rooms/x5y60z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
