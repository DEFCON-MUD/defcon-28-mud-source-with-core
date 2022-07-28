inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 60, 7 }));
  set_short( "Passage - x14y60z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y60z7.c",
  "east" : DIR+"/rooms/x15y60z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
