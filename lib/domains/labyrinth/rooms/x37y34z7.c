inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 7 }));
  set_short( "Passage - x37y34z7" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y34z7.c",
  "east" : DIR+"/rooms/x38y34z7.c",
  "north" : DIR+"/rooms/x37y35z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
