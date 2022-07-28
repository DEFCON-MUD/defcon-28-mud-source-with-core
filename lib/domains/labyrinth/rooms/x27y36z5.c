inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 5 }));
  set_short( "Passage - x27y36z5" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "south" : DIR+"/rooms/x27y35z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
