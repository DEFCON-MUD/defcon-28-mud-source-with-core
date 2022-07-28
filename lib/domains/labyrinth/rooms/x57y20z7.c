inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 7 }));
  set_short( "Passage - x57y20z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y20z7.c",
  "east" : DIR+"/rooms/x58y20z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
