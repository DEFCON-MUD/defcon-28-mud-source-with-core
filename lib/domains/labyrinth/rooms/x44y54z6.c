inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 54, 6 }));
  set_short( "Hallway - x44y54z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y54z6.c",
  "east" : DIR+"/rooms/x45y54z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
