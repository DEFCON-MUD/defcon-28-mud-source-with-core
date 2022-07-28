inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 47, 3 }));
  set_short( "Corridor - x19y47z3" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y48z3.c",
  "south" : DIR+"/rooms/x19y46z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
