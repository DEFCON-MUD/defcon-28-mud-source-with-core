inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 19, 5 }));
  set_short( "Passage - x9y19z5" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y20z5.c",
  "south" : DIR+"/rooms/x9y18z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
