inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 12, 4 }));
  set_short( "Corridor - x7y12z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y12z4.c",
  "north" : DIR+"/rooms/x7y13z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
