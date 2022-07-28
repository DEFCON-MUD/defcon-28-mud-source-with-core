inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 4 }));
  set_short( "Corridor - x7y6z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y7z4.c",
  "south" : DIR+"/rooms/x7y5z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
