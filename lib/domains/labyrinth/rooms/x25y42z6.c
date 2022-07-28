inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 6 }));
  set_short( "Hallway - x25y42z6" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y42z6.c",
  "south" : DIR+"/rooms/x25y41z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
