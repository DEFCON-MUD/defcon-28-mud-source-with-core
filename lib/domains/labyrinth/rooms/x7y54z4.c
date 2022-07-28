inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 54, 4 }));
  set_short( "Passage - x7y54z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y54z4.c",
  "east" : DIR+"/rooms/x8y54z4.c",
  "north" : DIR+"/rooms/x7y55z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
