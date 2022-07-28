inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 9, 5 }));
  set_short( "Corridor - x41y9z5" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y10z5.c",
  "south" : DIR+"/rooms/x41y8z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
