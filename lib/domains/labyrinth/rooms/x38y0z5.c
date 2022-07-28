inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 5 }));
  set_short( "Passage - x38y0z5" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z5.c",
  "east" : DIR+"/rooms/x39y0z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
