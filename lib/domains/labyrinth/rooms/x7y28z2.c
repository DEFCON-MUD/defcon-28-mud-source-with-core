inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 28, 2 }));
  set_short( "Corridor - x7y28z2" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y28z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
