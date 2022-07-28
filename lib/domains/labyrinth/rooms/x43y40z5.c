inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 5 }));
  set_short( "Hallway - x43y40z5" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y41z5.c",
  "south" : DIR+"/rooms/x43y39z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
