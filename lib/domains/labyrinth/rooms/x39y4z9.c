inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 9 }));
  set_short( "Hallway - x39y4z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y4z9.c",
  "east" : DIR+"/rooms/x40y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
