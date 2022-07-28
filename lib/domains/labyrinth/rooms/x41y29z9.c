inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 29, 9 }));
  set_short( "Passage - x41y29z9" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y30z9.c",
  "south" : DIR+"/rooms/x41y28z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
