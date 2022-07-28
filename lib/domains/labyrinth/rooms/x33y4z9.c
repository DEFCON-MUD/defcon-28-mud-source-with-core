inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 9 }));
  set_short( "Corridor - x33y4z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y4z9.c",
  "east" : DIR+"/rooms/x34y4z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
