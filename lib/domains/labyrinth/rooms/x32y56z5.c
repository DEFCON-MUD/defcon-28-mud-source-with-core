inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 56, 5 }));
  set_short( "Corridor - x32y56z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y56z5.c",
  "east" : DIR+"/rooms/x33y56z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
