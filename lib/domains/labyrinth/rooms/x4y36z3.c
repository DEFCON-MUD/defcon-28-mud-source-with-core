inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 36, 3 }));
  set_short( "Corridor - x4y36z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y36z3.c",
  "east" : DIR+"/rooms/x5y36z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
