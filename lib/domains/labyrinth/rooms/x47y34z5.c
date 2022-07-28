inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 5 }));
  set_short( "Hallway - x47y34z5" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y35z5.c",
  "south" : DIR+"/rooms/x47y33z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
