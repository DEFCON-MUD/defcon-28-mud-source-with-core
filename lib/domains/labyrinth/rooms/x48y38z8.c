inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 38, 8 }));
  set_short( "Hallway - x48y38z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y38z8.c",
  "east" : DIR+"/rooms/x49y38z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
