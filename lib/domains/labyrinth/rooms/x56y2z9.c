inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 9 }));
  set_short( "Corridor - x56y2z9" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z9.c",
  "east" : DIR+"/rooms/x57y2z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
