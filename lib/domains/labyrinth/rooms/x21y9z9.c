inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 9, 9 }));
  set_short( "Passage - x21y9z9" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y10z9.c",
  "south" : DIR+"/rooms/x21y8z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
