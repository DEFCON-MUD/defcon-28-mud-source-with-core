inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 1 }));
  set_short( "Hallway - x21y28z1" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y28z1.c",
  "east" : DIR+"/rooms/x22y28z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
