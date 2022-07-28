inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 43, 8 }));
  set_short( "Corridor - x55y43z8" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y44z8.c",
  "south" : DIR+"/rooms/x55y42z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
