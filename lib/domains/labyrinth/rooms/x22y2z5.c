inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 2, 5 }));
  set_short( "Passage - x22y2z5" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y2z5.c",
  "east" : DIR+"/rooms/x23y2z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
