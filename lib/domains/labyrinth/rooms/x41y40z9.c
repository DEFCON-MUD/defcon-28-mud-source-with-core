inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 9 }));
  set_short( "Corridor - x41y40z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y40z9.c",
  "south" : DIR+"/rooms/x41y39z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
