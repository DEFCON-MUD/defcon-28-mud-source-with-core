inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 4, 9 }));
  set_short( "Corridor - x37y4z9" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y4z9.c",
  "south" : DIR+"/rooms/x37y3z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
