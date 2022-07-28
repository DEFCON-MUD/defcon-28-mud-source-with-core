inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 25, 2 }));
  set_short( "Corridor - x11y25z2" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y26z2.c",
  "south" : DIR+"/rooms/x11y24z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
