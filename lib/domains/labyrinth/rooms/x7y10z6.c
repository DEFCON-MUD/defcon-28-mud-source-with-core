inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 6 }));
  set_short( "Hallway - x7y10z6" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y10z6.c",
  "south" : DIR+"/rooms/x7y9z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
