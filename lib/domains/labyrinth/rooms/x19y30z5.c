inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 5 }));
  set_short( "Corridor - x19y30z5" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z5.c",
  "north" : DIR+"/rooms/x19y31z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
