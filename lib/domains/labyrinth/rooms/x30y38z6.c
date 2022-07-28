inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 38, 6 }));
  set_short( "Corridor - x30y38z6" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y38z6.c",
  "east" : DIR+"/rooms/x31y38z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
