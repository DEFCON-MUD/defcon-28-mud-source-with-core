inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 6 }));
  set_short( "Hallway - x13y30z6" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y31z6.c",
  "south" : DIR+"/rooms/x13y29z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
