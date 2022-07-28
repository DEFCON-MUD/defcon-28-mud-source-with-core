inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 9 }));
  set_short( "Hallway - x51y26z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y26z9.c",
  "south" : DIR+"/rooms/x51y25z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
