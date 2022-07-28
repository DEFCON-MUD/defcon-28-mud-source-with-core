inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 18, 2 }));
  set_short( "Corridor - x10y18z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y18z2.c",
  "east" : DIR+"/rooms/x11y18z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
