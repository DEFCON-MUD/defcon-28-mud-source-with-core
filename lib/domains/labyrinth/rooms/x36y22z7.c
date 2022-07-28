inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 22, 7 }));
  set_short( "Hallway - x36y22z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y22z7.c",
  "east" : DIR+"/rooms/x37y22z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
