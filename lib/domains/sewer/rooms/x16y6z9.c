inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 6, 9 }));
  set_short( "Passage - x16y6z9" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y6z9.c",
  "east" : DIR+"/rooms/x17y6z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
