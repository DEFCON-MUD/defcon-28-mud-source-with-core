inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 30, 5 }));
  set_short( "Passage - x53y30z5" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y30z5.c",
  "north" : DIR+"/rooms/x53y31z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
