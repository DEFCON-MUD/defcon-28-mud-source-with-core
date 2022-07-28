inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 37, 7 }));
  set_short( "Corridor - x39y37z7" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y38z7.c",
  "south" : DIR+"/rooms/x39y36z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
