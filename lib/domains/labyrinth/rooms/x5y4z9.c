inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 9 }));
  set_short( "Corridor - x5y4z9" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y4z9.c",
  "north" : DIR+"/rooms/x5y5z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
