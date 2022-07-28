inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 62, 3 }));
  set_short( "Corridor - x45y62z3" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y62z3.c",
  "east" : DIR+"/rooms/x46y62z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
