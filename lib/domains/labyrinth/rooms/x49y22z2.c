inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 2 }));
  set_short( "Corridor - x49y22z2" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z2.c",
  "north" : DIR+"/rooms/x49y23z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
