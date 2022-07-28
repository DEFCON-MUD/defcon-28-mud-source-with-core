inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 6 }));
  set_short( "Corridor - x17y4z6" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y4z6.c",
  "east" : DIR+"/rooms/x18y4z6.c",
  "north" : DIR+"/rooms/x17y5z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
