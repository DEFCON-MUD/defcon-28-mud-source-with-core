inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 2 }));
  set_short( "Corridor - x11y19z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z2.c",
  "south" : DIR+"/rooms/x11y18z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
