inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 1 }));
  set_short( "Passage - x11y24z1" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y24z1.c",
  "north" : DIR+"/rooms/x11y25z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
