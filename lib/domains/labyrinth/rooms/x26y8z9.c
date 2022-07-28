inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 8, 9 }));
  set_short( "Passage - x26y8z9" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y8z9.c",
  "east" : DIR+"/rooms/x27y8z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
