inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 61, 2 }));
  set_short( "Corridor - x61y61z2" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y62z2.c",
  "south" : DIR+"/rooms/x61y60z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
