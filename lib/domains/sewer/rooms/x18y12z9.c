inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 12, 9 }));
  set_short( "Passage - x18y12z9" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y12z9.c",
  "east" : DIR+"/rooms/x19y12z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
