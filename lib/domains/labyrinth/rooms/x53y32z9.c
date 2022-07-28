inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 9 }));
  set_short( "Hallway - x53y32z9" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y32z9.c",
  "north" : DIR+"/rooms/x53y33z9.c",
  "south" : DIR+"/rooms/x53y31z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
