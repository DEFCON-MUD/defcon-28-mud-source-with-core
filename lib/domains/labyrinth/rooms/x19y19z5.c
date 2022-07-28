inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 19, 5 }));
  set_short( "Hallway - x19y19z5" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y20z5.c",
  "south" : DIR+"/rooms/x19y18z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
