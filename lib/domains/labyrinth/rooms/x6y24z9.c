inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 24, 9 }));
  set_short( "Passage - x6y24z9" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y24z9.c",
  "east" : DIR+"/rooms/x7y24z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
