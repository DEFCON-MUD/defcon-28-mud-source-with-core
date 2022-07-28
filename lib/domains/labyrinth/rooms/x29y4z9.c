inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 4, 9 }));
  set_short( "Hallway - x29y4z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y4z9.c",
  "south" : DIR+"/rooms/x29y3z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
