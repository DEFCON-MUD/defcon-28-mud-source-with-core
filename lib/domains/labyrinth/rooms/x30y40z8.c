inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 40, 8 }));
  set_short( "Corridor - x30y40z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y40z8.c",
  "east" : DIR+"/rooms/x31y40z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
