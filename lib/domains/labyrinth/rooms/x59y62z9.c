inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 9 }));
  set_short( "Passage - x59y62z9" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y62z9.c",
  "east" : DIR+"/rooms/x60y62z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
