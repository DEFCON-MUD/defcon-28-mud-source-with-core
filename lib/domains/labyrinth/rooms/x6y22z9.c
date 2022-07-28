inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 22, 9 }));
  set_short( "Passage - x6y22z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y22z9.c",
  "east" : DIR+"/rooms/x7y22z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
