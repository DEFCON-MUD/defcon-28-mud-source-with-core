inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 5 }));
  set_short( "Corridor - x49y12z5" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y13z5.c",
  "south" : DIR+"/rooms/x49y11z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
