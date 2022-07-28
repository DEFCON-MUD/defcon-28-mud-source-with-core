inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 1 }));
  set_short( "Corridor - x45y42z1" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y42z1.c",
  "north" : DIR+"/rooms/x45y43z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
