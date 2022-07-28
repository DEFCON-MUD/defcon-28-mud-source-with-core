inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 4, 5 }));
  set_short( "Hallway - x6y4z5" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y4z5.c",
  "east" : DIR+"/rooms/x7y4z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
