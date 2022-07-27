inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 6 }));
  set_short( "Passage - x33y26z6" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z6.c",
  "north" : DIR+"/rooms/x33y27z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
