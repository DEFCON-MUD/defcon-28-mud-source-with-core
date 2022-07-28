inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 1 }));
  set_short( "Hallway - x27y20z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y20z1.c",
  "north" : DIR+"/rooms/x27y21z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
