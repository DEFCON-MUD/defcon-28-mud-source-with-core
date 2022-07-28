inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 9 }));
  set_short( "Corridor - x49y44z9" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y45z9.c",
  "south" : DIR+"/rooms/x49y43z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
